

#include <iostream>
#include <string>
#include "Customer.h"
#include "CustomerRepository.h"	

using namespace std;
#pragma once
class ICustomerService {


public:
	virtual void searchCustomerByfirstname(const std::string& firstname)=0;
	virtual void saveCustomers()=0;
	virtual void searchCustomerById(int id)=0;
	virtual void addCustomer(Customer* customer)=0;
	virtual void removeCustomer(int index)=0;
	virtual void updateCustomer(int index, Customer* customer)=0;
	virtual void displayCustomers() = 0;
};


