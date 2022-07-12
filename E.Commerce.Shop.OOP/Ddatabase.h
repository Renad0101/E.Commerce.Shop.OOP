#pragma once



class Database
{
public:
	vector<ProductItem> productItem;
	vector<Customer> customers;
	vector<Admin> admins;

	void Update() {
		int id;
		cout << "Enter id of which you want to update: " << endl;
		cin >> id;
		for (size_t i = 0; i < productItem.size(); i++)
		{
			if (productItem[i].getId() == id)
			{
				cout << "Update quantity: " << endl;
				int newQuantity;
				cin >> newQuantity;
				productItem[i]._quantity = newQuantity;

			}
		}
	}
	void Create() {
		cout << "For create a new product, add product name, price, color, quantity: " << endl;
		string name, color;
		double price;
		int quantity;
		cin >> name >> price >> color >> quantity;
		Product* p = new Product(name, price, color);
		productItem.push_back(ProductItem(quantity, p));

	}
	void Read()
	{
		for (size_t i = 0; i < productItem.size(); i++)
		{
			cout << productItem[i] << endl;
		}
	}
};