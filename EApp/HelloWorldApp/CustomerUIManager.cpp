
#include <iostream>
#include <string>
#include "CustomerUIManager.h"
#include "Customer.h"


using namespace std;


void CustomerUIManager::displayWelcomeMessage() {
	std::cout << "Welcome to Transflower Store!" << std::endl;
}
void CustomerUIManager::displayGoodbyeMessage() {
	std::cout << "Thank you for visiting Transflower Store!" << std::endl;
}
void CustomerUIManager::displayErrorMessage(const std::string& message) {
	std::cout << "Error: " << message << std::endl;
}
void CustomerUIManager::displaySuccessMessage(const std::string& message) {
	std::cout << "Success: " << message << std::endl;
}


void CustomerUIManager::displayCustomerDetails(const Customer& customers) {
	customers.display();
}

void CustomerUIManager::displayCustomer(const CustomerBinaryIOManager& manager) {
	// incomplete
	
}

void CustomerUIManager::displayCustomerNotFound() {
	std::cout << "Product not found!" << std::endl;
}

void CustomerUIManager::displayCustomerAdded() {
	std::cout << "Product added successfully!" << std::endl;
}


void CustomerUIManager::displayMenu() {
	std::cout << "1. Add Customer" << std::endl;
	std::cout << "2. Update Customer" << std::endl;
	std::cout << "3. Remove Customer" << std::endl;
	std::cout << "4. Display Customer" << std::endl;
	std::cout << "8. Exit" << std::endl;
	std::cout << "9. Add To File" << std::endl;
}

void CustomerUIManager::getCustomerDetails(int& id, string& firstname, string& lastname, string& email, int& age) {
	std::cout << "Enter Customer ID: ";
	std::cin >> id;
	std::cout << "Enter firstname: ";
	std::cin.ignore();
	std::getline(std::cin, firstname);
	std::cout << "Enter lastname: ";
	std::getline(std::cin, lastname);
	std::cout << "Enter email: ";
	std::getline(std::cin, email);
	std::cout << "Enter age ";
	std::cin >> age;
	
}




void CustomerUIManager::getCustomerId(int& customerId) {
	std::cout << "Enter Customer ID: ";
	std::cin >> customerId;
}






void CustomerUIManager::getCustomerFirstName(string& firstname) {
	std::cout << "Enter customer firstname: ";
	std::cin.ignore();
	std::getline(std::cin, firstname);
}

void CustomerUIManager::handleUserInput(CustomersController& controller) {
	int choice;
	do {
		displayMenu();
		std::cout << "Enter your choice: ";
		std::cin >> choice;
		switch (choice) {
		case 1: {
			int id, age;
			string firstname, lastname, email;
			getCustomerDetails(id, firstname, lastname, email, age);
			controller.addCustomer(id, firstname, lastname, email, age);
			displayCustomerAdded();
			break;

		}
		case 2: {
			int index;
			getCustomerId(index);
			Customer* customer = new Customer(); // Create a temporary product object
			int id, age;
			string firstname,lastname, email;
		
			getCustomerDetails(id, firstname, lastname, email, age);
			customer->setFirstname(firstname);
			customer->setLastname(lastname);
			customer->setEmail(email);
			customer->setAge(age);
			controller.updateCustomer(index, customer);
			break;
		}
		case 3: {
			int index;
			getCustomerId(index);
			controller.removeCustomer(index);
			break;
		}
		case 4:
			controller.displayCustomers();

			break;
		
		case 5: {
			string firstname;
			getCustomerFirstName(firstname);
			//controller.getCustomerFirstName(firstname);

			break;
		}
		case 6:
			std::cout << "Exiting..." << std::endl;
			break;

		case 7:
		{
			cout << "Save to File" << endl;
			//controller.sa();
		}
		break;
		default:
			std::cout << "Invalid choice! Please try again." << std::endl;
		}
	} while (choice != 8);



}

