#pragma once

#include <iostream>
#include <string>
#include "Customer.h"
#include "CustomerRepository.h"	
#include "ICustomerService.h"


class CustomerRepository;

using namespace std;

class CustomerService:public ICustomerService{

private:
	CustomerRepository& repo;


public:
	
	CustomerService(CustomerRepository& r) ;
	void searchCustomerById(int id)override;
	void addCustomer(Customer* customer)override;
	void removeCustomer(int index)override;
	void updateCustomer(int index, Customer* customer)override;
	void searchCustomerByfirstname(const std::string& firstname)override;
	void saveCustomers()override;
	void displayCustomers()override;
};


