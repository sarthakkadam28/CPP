//Macro:
//Macro to prevent multiple inclusions of the header file
//This is a common practice in C++ to avoid redefinition errors
//when the same header file is included multiple times in a project.
//The macro __PRODUCTSCONTROLLER_H is defined at the beginning of the file

#ifndef __PRODUCTSCONTROLLER_H
#define __PRODUCTSCONTROLLER_H

#include <iostream>
#include <string>
#include "IProductsController.h"
#include "ProductService.h"
#include "Product.h"

using namespace std;

class ProductsController:public IProductsController {
private:
	ProductRepository& repo;
	ProductService& service;
	 

public:
	//behavior

	ProductsController(ProductRepository& r, ProductService& s);
	~ProductsController();
	void addProduct(int id, const string& title, const string& description, const string& category, int quantity, double price)override;
	void removeProduct(int index)override;
	void updateProduct(int index, Product* product)override;
	void displayProducts() const override;
	void applyDiscount(int productId, double discount)override;
	void calculateTotalPrice(int productId)override;
	void searchProductByTitle(const string& title)override;
	void getProductId(int& productId)override;
	void getProductIndex(int& index)override;
	void getProductTitle(string& title)override;
	void saveProducts()override;
};
#endif

