#include "CustomersController.h"
#include <iostream>
#include <string>
#include "Customer.h"
#include "CustomerRepository.h"
#include "CustomerService.h"
#include "CustomerBinaryIOManger.h"

using namespace std;


/*
CustomersController::CustomersController()  // Default constructor
{


	// Initialize the repository and service with default values
	CustomerRepository repo;
	CustomerService service(repo);
	this->repo = repo;
	this->service = service;
}
*/



CustomersController::CustomersController(CustomerRepository& r, CustomerService& s): repo(r), service(s) // Use member initializer list to initialize references
{
	// Constructor implementation
	cout << "CustomersController constructor called." << endl;
	cout << "CustomerRepository and CustomerService initialized." << endl;
}

void CustomersController::addCustomer(int id, const string& firstname, const string& lastname, const string& email, int age) {
	Customer* customer = new Customer( firstname, lastname, email, id,age);
	service.addCustomer(customer);
}
void CustomersController::removeCustomer(int index) {
	service.removeCustomer(index);
}
void CustomersController::updateCustomer(int index, Customer* customer) {
	service.updateCustomer(index,customer);
}
void CustomersController::displayCustomers() {
	service.displayCustomers();
}


void CustomersController::searchCustomer(string firstname) {
	//service.searchCustomer(firstname);
	}
void CustomersController::listAllCustomers() {
	CustomerBinaryIOManager ioManager;
	vector<Customer> customers = ioManager.loadCustomer();
	ioManager.displayCustomer(customers);
}


CustomersController::~CustomersController() {
	
}


