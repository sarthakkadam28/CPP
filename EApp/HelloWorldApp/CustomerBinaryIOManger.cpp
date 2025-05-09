#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include "Customer.h"
#include "CustomerBinaryIOManger.h"

using namespace std;

void CustomerBinaryIOManager::saveCustomer( std::vector<Customer>& customers) {
	string filename = "customers.dat";
	std::ofstream outFile(filename, ios::binary);
	if (!outFile) {
		cerr << "Error opening file for writing: " << filename << endl;
		return;
	}
	size_t count = customers.size();
	outFile.write(reinterpret_cast<char*>(&count), sizeof(count));
	for (auto& customer : customers) {
		customer.serialize(outFile);
	}
	std::cout << "Data saved " << std::endl;

}
vector<Customer> CustomerBinaryIOManager::loadCustomer() {
	string filename = "customers.dat";
	ifstream inFile(filename,ios::binary);
	if (!inFile) {
		cerr << "Error opening file for reading: " << filename << endl;

	}
	size_t size;
	
	inFile.read(reinterpret_cast<char*>(&size), sizeof(size));
	vector<Customer> customers(size);
	for (auto& customer : customers) {
		customer.deserialize(inFile);
	}

	return customers;
}
void CustomerBinaryIOManager::displayCustomer(const std::vector<Customer>& customers){

	for (const auto& customer : customers) {
		customer.display();
	}
	std::cout << std::endl;

}

void CustomerBinaryIOManager::addCustomer(std::vector<Customer>& customers, const Customer& customer){


	customers.push_back(customer);
	std::cout << "Customer added successfully!" << std::endl;
	std::cout << std::endl;
	std::cout << "Customer details:" << std::endl;
	customer.display();
	std::cout << std::endl;

}
void CustomerBinaryIOManager::removeCustomer(std::vector<Customer>& customers, int customerId) {

	auto it = std::remove_if(customers.begin(), customers.end(), [customerId](const Customer& customer) {
		return customer.getCustomerId() == customerId;
		});
	if (it != customers.end()) {
		customers.erase(it, customers.end());
		std::cout << "Customer removed successfully!" << std::endl;
	}
	else {
		std::cout << "Customer not found!" << std::endl;
	}
}


void CustomerBinaryIOManager::updateCustomer(std::vector<Customer>&customers, const Customer & updatedCustomer){
	auto it = std::find_if(customers.begin(), customers.end(), [updatedCustomer](const Customer& customer) {
		return customer.getCustomerId() == updatedCustomer.getCustomerId();
		});
	if (it != customers.end()) {
		*it = updatedCustomer;
		std::cout << "Customer updated successfully!" << std::endl;
	}
	else {
		std::cout << "Customer not found!" << std::endl;
	}
}

