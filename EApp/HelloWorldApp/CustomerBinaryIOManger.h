
#ifndef  __CUSTOMERBINARYIOMANGER_H
#define __CUSTOMERBINARYIOMANGER_H


#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include "Customer.h"
#include"IPersistCustomerManager.h"
using namespace std;
class CustomerBinaryIOManager:public IPersistCustomerManager {
public:

	 vector<Customer> loadCustomer()override;
	void saveCustomer( std::vector<Customer>& customers) override;

	 void displayCustomer(const std::vector<Customer>& customers) override;

	 void addCustomer(std::vector<Customer>& customers, const Customer& customer)override;
	void removeCustomer(std::vector<Customer>& customers, int customerId)override;
	void updateCustomer(std::vector<Customer>& customers, const Customer& updatedcustomer)override;



};

#endif
