#pragma once
#ifndef __CUSTOMERSCONTROLLER
#define __CUSTOMERSCONTROLLER

#include <iostream>
#include <string>
#include "Customer.h"
#include "ICustomersController.h"

#include "CustomerRepository.h"
#include "CustomerService.h"


//concrete class

class CustomersController :public ICustomersController
{

private:
	CustomerService& service;
	CustomerRepository& repo;

public:
	//CustomersController();
	CustomersController(CustomerRepository& r, CustomerService& s); 
	~CustomersController();

	void addCustomer(int id, const string& firstname, const string& lastname, const string& email, int age) override;
	void removeCustomer(int index)override;
	void updateCustomer(int index, Customer* customer)override;
	void displayCustomers()override;
	void searchCustomer(string firstname) override;
	void listAllCustomers()override;
};

#endif