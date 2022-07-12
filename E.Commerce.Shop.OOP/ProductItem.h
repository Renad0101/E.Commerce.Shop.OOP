#pragma once

class ProductItem
{
	static int _staticId;
	int _id;
	Product* _product;

public:
	int _quantity;
	ProductItem(int quantity, Product* product)
	{
		this->_id = (++_staticId);
		this->_quantity = quantity;
		this->_product = product;
	}

	double AllPrice() 
	{
		return _product->getPrice() * _quantity; 
	}

	Product getProduct() 
	{ 
		return *_product;
	}

	int getId()const
	{
		return _id;
	}

	int getQuantity()const 
	{
		return _quantity;
	}

	friend ostream& operator<<(ostream& output, const ProductItem& crop);
};
int ProductItem::_staticId = 0;
ostream& operator<<(ostream& output, const ProductItem& crop) 
{
	cout << "ProductItem Id: " << crop._id << endl;
	cout<< "Quantity: " << crop._quantity << endl;
	cout << "Product: " << *crop._product << endl;
	return output;
}