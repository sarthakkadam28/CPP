#include <iostream>
#include <string>
#include <vector>
#include "Customer.h"
#include "CustomerRepository.h"
#include "CustomerService.h"
#include "CustomersController.h"
#include  "IPersistCustomerManager.h"
#include "CustomerBinaryIOManger.h"
#include "CustomerUIManager.h"

using namespace std;
int main()
{
	std::cout << "Welcome to Transflower Store!";
	std::vector<Customer> customers;
	IPersistCustomerManager* ptrMgr = new CustomerBinaryIOManager();
	CustomerUIManager uiManager;
	CustomerRepository repo;
	CustomerService service(repo);
	CustomersController controller(repo, service);
    uiManager.displayWelcomeMessage();
	uiManager.handleUserInput(controller);

	
	return 0;



}

