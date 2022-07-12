#pragma once


namespace myAdmin
{
	class Admin {
		int _id;
		string _username;
		string _password;
	public:
		Admin(int id, string username, string password)
		{
			this->_id = id;
			this->_username = username;
			this->_password = password;
		}

		int getId()const 
		{ 
			return _id; 
		}

		string getUsername()const 
		{
			return _username;
		}

		string getPassword()const
		{
			return _password;
		}
	};

}
