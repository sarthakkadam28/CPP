#include <iostream>
#include <string>
#include <vector>
#include "CustomerRepository.h"

#include "Customer.h"
#include "IPersistCustomerManager.h"
#include "CustomerBinaryIOManger.h"


using namespace std;

// Constructor and Destructor
CustomerRepository::CustomerRepository() : customerCount(0) {
}

CustomerRepository::~CustomerRepository() {
	for (int i = 0; i < customerCount; i++) {
		delete customers[i];
	}
}

void CustomerRepository::addCustomer(Customer* customer) {
	if (customerCount < 100) {
		cout << "customer count" << customerCount << endl;
		customers[customerCount++] = customer;
	}
	else {
		cout << "Customer repository is full!" << std::endl;
	}
}

Customer* CustomerRepository::getCustomer(int index) const {
	if (index >= 0 && index < customerCount) {
		return customers[index];
	}
	return nullptr;
}

Customer* CustomerRepository::findCustomerById(int id) const {
	for (int i = 0; i < customerCount; i++) {
		if (customers[i]->getCustomerId() == id) {
			return customers[i];
		}
	}
	return nullptr;
}
Customer* CustomerRepository::findCustomerByFirstname(const std::string& firstname) const {
	for (int i = 0; i < customerCount; i++) {
		if (customers[i]->getFirstname() == firstname) {
			return customers[i];
		}
	}
	return nullptr;
}

void CustomerRepository::removeCustomer(int index) {
	if (index >= 0 && index < customerCount) {
		delete customers[index];
		for (int i = index; i < customerCount - 1; i++) {
			customers[i] = customers[i + 1];
		}
		customerCount--;
	}
	else {
		std::cout << "Invalid index!" << std::endl;
	}
}

void CustomerRepository::updateCustomer(int index, Customer* customer) {
	if (index >= 0 && index < customerCount) {
		customers[index]->setFirstname(customer->getFirstname());
		customers[index]->setLastname(customer->getLastname());
		customers[index]->setEmail(customer->getEmail());
		customers[index]->setCustomerId(customer->getCustomerId());
		customers[index]->setAge(customer->getAge());
	}
	else {
		std::cout << "Invalid index!" << std::endl;
	}
}

void CustomerRepository::displayCustomers() const {
	for (int i = 0; i < customerCount; i++) {
		customers[i]->display();
		std::cout << "------------------------" << std::endl;
	}

}

void CustomerRepository::saveCustomers() {
	std::string filename = "customer.dat";
	std::vector<Customer> tempCustomers;

	for (int i = 0; i < customerCount; i++) {
		//products[i]->display();
		tempCustomers.push_back(*(customers[i]));
		std::cout << "------------------------" << std::endl;
	}

	// Save products to file using ProductIOManager
	//create derived class and point to base class
	IPersistCustomerManager* ioManager = new CustomerBinaryIOManager();
	ioManager->saveCustomer(tempCustomers);

}

