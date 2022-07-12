#pragma once


namespace myProducts
{
	class Product {
		static int _staticId;
		int _id;
		string _name;
		double _price;
		string _color;
	public:
		Product(string name, double price, string color)
		{
			this->_id = (++_staticId);
			this->_name = name;
			this->_price = price;
			this->_color = color;
		}

		int getId()const
		{ 
			return _id;
		}

		string getName()const 
		{
			return _name; 
		}

		string getColor()const 
		{ 
			return _color; 
		}

		double getPrice()const 
		{ 
			return _price;
		}

		friend ostream& operator<<(ostream& output, const Product& crop);
	};
	int Product::_staticId = 0;;
	ostream& operator<<(ostream& output, const Product& crop)
	{
		cout << "Id: " << crop._id << endl;
		cout << "Name: " << crop._name << endl;
		cout << "Price: " << crop._price << endl;
	    cout << "Color: " << crop._color << endl;

		return output;
	}

	
}