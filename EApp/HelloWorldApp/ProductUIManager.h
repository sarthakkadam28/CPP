
#include <iostream>
#include <string>
#include "IProductUIManager.h"

	
using namespace std;

class ProductUIManager:public IProductUIManager {

	public:

		void displayWelcomeMessage() override;
		void displayGoodbyeMessage() override;
		void displayErrorMessage(const std::string& message);
		void displaySuccessMessage(const std::string& message);


		void displayProductDetails(const Product& product);
		void displayProducts(const ProductRepository& repo);
		void displayProductNotFound();
		void displayProductAdded();
		void displayMenu();
		void getProductDetails(int& id, string& title, string& description, string& category, int& quantity, double& price);
		void getDiscountDetails(int& productId, double& discount);

		void getProductId(int& productId);
		void getProductIndex(int& index);
		void getProductTitle(string& title);
		void handleUserInput(ProductsController& controller);
};
