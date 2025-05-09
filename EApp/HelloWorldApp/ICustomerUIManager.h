#pragma once

#include <iostream>
#include <string>
#include "Customer.h"
#include "CustomersController.h"



using namespace std;
class ICustomerUIManager {

public:

	virtual void displayWelcomeMessage() = 0;
	virtual void displayGoodbyeMessage() = 0;
	virtual void displayErrorMessage(const std::string& message) = 0;
	virtual void displaySuccessMessage(const std::string& message) = 0;

	virtual void displayCustomerDetails(const Customer& cutomer) = 0;
	virtual void displayCustomer(const CustomerBinaryIOManager& manager) = 0;
	virtual void displayCustomerNotFound() = 0;
	virtual void displayCustomerAdded() = 0;
	virtual void displayMenu() = 0;


	virtual void getCustomerId(int& customerId) = 0;
	virtual void getCustomerFirstName(string& firstname) =0;
	virtual void getCustomerDetails(int& id, string& firstname, string& lastname, string& email, int& age) = 0;

	 
	virtual void handleUserInput(CustomersController& controller) = 0;
};
