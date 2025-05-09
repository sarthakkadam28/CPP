#pragma once



#include "Customer.h"
#include <iostream>
#include <string>
#include"IPersistCustomerRepository.h"

using namespace std;

class CustomerRepository :public IPersistCustomerRepository {
private:
	Customer* customers[100];
	int customerCount;

public:
	
	CustomerRepository();
	~CustomerRepository();
	void addCustomer(Customer* customers)override;
	Customer* getCustomer(int index) const override;
	Customer* findCustomerById(int id) const override;
	Customer* findCustomerByFirstname(const std::string& firstname) const override;
	void removeCustomer(int index)override;
	void updateCustomer(int index, Customer* customers)override;
	void displayCustomers() const override;
	void saveCustomers()override;
};
