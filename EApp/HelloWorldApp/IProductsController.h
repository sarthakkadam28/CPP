#include <iostream>
#include <string>
#include "ProductRepository.h"
#include "ProductService.h"
#include "Product.h"
using namespace std;

class IProductsController {

public:
	virtual void addProduct(int id, const string& title, const string& description, const string& category, int quantity, double price) = 0;
	virtual void removeProduct(int index) = 0;
	virtual void updateProduct(int index, Product* product) = 0;
	virtual void displayProducts() const = 0;
	virtual void applyDiscount(int productId, double discount) = 0;
	virtual void calculateTotalPrice(int productId) = 0;
	virtual void searchProductByTitle(const string& title) = 0;
	virtual void getProductId(int& productId) = 0;
	virtual void getProductIndex(int& index) = 0;
	virtual void getProductTitle(string& title) = 0;
	virtual void saveProducts() = 0;

};