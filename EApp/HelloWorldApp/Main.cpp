#include <iostream>
#include <string>
#include <vector>
#include "Product.h"
#include "ProductRepository.h"
#include "ProductService.h"
#include "ProductsController.h"
#include  "IPersistManager.h"
#include "ProductTextIOManager.h"
#include "ProductBinaryIOManger.h"
#include "ProductJSONIOManager.h"
#include "CustomerUIManager.h"
#include "Customer.h"
#include "CustomerBinaryIOManger.h"
#include "IPersistCustomerManager.h"

using namespace std;
/*int main()
{

	std::cout << "Welcome to Transflower Store!\n";
	std::vector<Customer> customers;
 	//IPersistManager* ptrMgr = new ProductTextIOManager();
	IPersistCustomerManager* ptrMgr = new CustomerBinaryIOManager();
	//IPersistManager* ptrMgr = new ProductJSONIOManager();


	/*
	products = ptrMgr->loadProducts();
	// Add products to the repository  from vector container
	ProductRepository repo;
	for (const auto& product : products) {
		Product* pProduct = new Product(product.getProductId(), product.getTitle(), product.getDescription(), product.getCategory(), product.getQuantity(), product.getPrice());
		repo.addProduct(pProduct);
	}

	*/

	//Set up User Interface
	/*	UIManager uiManager;
		ProductRepository repo;
		ProductService service(repo); //service
		ProductsController controller(repo, service); //controller
	*/
