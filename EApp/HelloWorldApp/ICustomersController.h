#include <iostream>
#include <string>
#include "Customer.h"

class ICustomersController
{
	public:

	virtual void addCustomer(int id, const string& firstname, const string& lastname, const string& email, int age)=0;
	virtual void removeCustomer(int index) = 0;
	virtual void updateCustomer(int index, Customer* customer) = 0;
	virtual void displayCustomers() = 0;
	virtual void searchCustomer(string firstname) = 0;
	virtual void listAllCustomers() = 0;
};