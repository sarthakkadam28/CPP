#pragma once

#include <iostream>
#include <string>
#include "Product.h"
#include "ICustomerUIManager.h"
#include "CustomersController.h"

#include "Customer.h"


using namespace std;
class CustomerUIManager :public ICustomerUIManager
{
	public:
		void displayWelcomeMessage() override;
		void displayGoodbyeMessage() override;
		void displayErrorMessage(const std::string& message) override ;
		void displaySuccessMessage(const std::string& message) override;
		void displayCustomerDetails(const Customer& customer) override;
		void displayCustomer(const CustomerBinaryIOManager& manager) override;
		void displayCustomerNotFound() override;
		void displayCustomerAdded() override;
		void displayMenu() override;
		void getCustomerDetails(int& id, string& firstname, string& lastname, string& email, int& age) override;
		
		void getCustomerId(int& customerId) override;
		void getCustomerFirstName(string& firstname) override;
		void handleUserInput(CustomersController& controller) override;
};
