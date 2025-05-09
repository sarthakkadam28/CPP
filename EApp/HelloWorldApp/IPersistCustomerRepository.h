#pragma once
#pragma once


#include "Customer.h"
#include <iostream>
#include <string>
#include "CustomerBinaryIOManger.h"

using namespace std;

class IPersistCustomerRepository {


public:
	
	virtual void addCustomer(Customer* customers) = 0;
	virtual Customer* getCustomer(int index) const = 0;
	virtual Customer* findCustomerById(int id) const = 0;
	virtual Customer* findCustomerByFirstname(const std::string& firstname) const = 0;
	virtual void removeCustomer(int index) = 0;
	virtual void updateCustomer(int index, Customer* customers) = 0;
	virtual void displayCustomers() const = 0;
	virtual void saveCustomers() = 0;
 
};

