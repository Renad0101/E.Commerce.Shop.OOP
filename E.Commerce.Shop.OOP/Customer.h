#pragma once

namespace myCustomer
{
	class Customer 
	{
		int _id;
		string _name;
		string _surname;
		string _dateOfBirth;
	public:

		Customer(int id, string name, string surname, string dateOfBirth)
		{
			this->_id = id;
			this->_name = name;
			this->_surname = surname;
			this->_dateOfBirth = dateOfBirth;
		}

		int getId()const 
		{ 
			return _id;
		}
		string getName()const 
		{
			return _name;
		}
		string getSurname()const 
		{
			return _surname; 
		}
		string getDateOfBirth()const 
		{
			return _dateOfBirth; 
		}


	};

}