#pragma once


class Base
{
public:
	static void Start()
	{
		Database database;
		database.admins.push_back(Admin(1, "Renad0101", "renad6168"));
		database.admins.push_back(Admin(2, "Zaur0509", "zaur1979"));

		int a;
		Product p1 = Product("Red Bull", 6.5, "yellow");
		Product p2 = Product("Burn", 5.5, "red");
		Product p3 = Product("Hazard", 4.5, "green");

		database.productItem.push_back(ProductItem(15, &p1));
		database.productItem.push_back(ProductItem(30, &p2));
		database.productItem.push_back(ProductItem(45, &p3));

		cout << "We are glad to see you in E-Commerce Shop!!!" << endl;
		while (true)
		{
			cout << "Enter 1 for Customer, 2 for Admin" << endl;
			cin >> a;
			if (a == 1)
			{
				string name, surname, dateOfBirth;
				int id;
				cout << "Enter your id, name, surname, date of birth: " << endl;
				cin >> id >> name >> surname >> dateOfBirth;
				Customer customer(id, name, surname, dateOfBirth);
				database.customers.push_back(customer);
				cout << endl;

				for (size_t i = 0; i < database.productItem.size(); i++)
				{
					cout << "Id: " << database.productItem[i].getId() << endl;
					cout << "Name: " << database.productItem[i].getProduct().getName() << endl;
				}
				cout << " you would like to see  details ?: y/n" << endl;
				char choose;
				cin >> choose;
				if (choose == 'y')
				{
					for (size_t i = 0; i < database.productItem.size(); i++)
					{
						cout << database.productItem[i] << endl;
					}
				}
				else cout << "All Right" << endl;

				cout << "Do you want to buy? " << endl;
				cin >> choose;
				if (choose == 'y')
				{
					cout << "Enter what you want to buy: " << endl;
					int buyId;
					cin >> buyId;
					cout << "How much you want to buy?: " << endl;
					int amount;
					cin >> amount;

					for (size_t i = 0; i < database.productItem.size(); i++)
					{
						if (buyId == database.productItem[i].getId()) {
							database.productItem[i]._quantity -= amount;
							cout << "thank you for shopping!!!" << endl;
						}
					}
				}
				else cout << "All Right" << endl;


			}
			else if (a == 2)
			{


				int choose;
				string username;
				cout << "Enter username: " << endl;
				cin >> username;
				string Password;
				cout << "Enter password: ";
				cin >> Password;


				for (size_t i = 0; i < database.admins.size(); i++)
				{
					if (database.admins[i].getUsername() == username && database.admins[i].getPassword() == Password) 
					{
						cout << "\nEnter 1 for show all products, 2 for add product, 3 for update" << endl;

						cin >> choose;
						switch (choose)
						{
						case 1:
							database.Read();
							break;
						case 2:
							database.Create();
							break;
						case 3:
							database.Update();
							break;
						default:
							break;
						}
					}
				}

			}
		}
	}
};