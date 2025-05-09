

#include <string>
 #include "Product.h"
#include "ProductRepository.h"	
#include "IProductService.h"


class ProductRepository;

using namespace std;
#pragma once
class ProductService:public IProductService 
	{

private:
	ProductRepository& repo; 

public:
	ProductService(ProductRepository& r);
	void applyDiscount(int productId, double discount) override;
	void calculateTotalPrice(int productId) override;
	void searchProductByTitle(const std::string& title) override;
	void saveProducts() ;
};


