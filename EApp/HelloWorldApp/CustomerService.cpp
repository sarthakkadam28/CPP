

#include <iostream>
#include <string>
#include "CustomerService.h"
#include "CustomerRepository.h"
#include "Customer.h"





CustomerService::CustomerService(CustomerRepository& r) :repo(r) {
}

void CustomerService::searchCustomerByfirstname(const std::string& firstname) {

	Customer* customer = repo.findCustomerByFirstname(firstname);
	if (customer != nullptr) {
		customer->display();
	}
	else {
		cout << "Customer not found!" << endl;
	}
};

void CustomerService::searchCustomerById(int id) {
	Customer* customer = repo.findCustomerById(id);
	if (customer != nullptr) {
		customer->display();
	}
	else {
		cout << "Customer not found!" << endl;
	}
}
void CustomerService::saveCustomers() {
	this->repo.saveCustomers();
}
void CustomerService::addCustomer(Customer* customer) {
	this->repo.addCustomer(customer);
}
void CustomerService::removeCustomer(int index) {
	this->repo.removeCustomer(index);
}

void CustomerService::updateCustomer(int index, Customer* customer) {
	this->repo.updateCustomer(index, customer);
}
void CustomerService::displayCustomers() {
	this->repo.displayCustomers();
}


