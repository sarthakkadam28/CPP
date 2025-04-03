#include <iostream>
#include <fstream>
#include <string>

using namespace std;
class product
{
private:
    int id;
    string name;
    int rate;
    int quantity;

public:
    product(int i = 0, string nm = "soap", int r = 20, int q = 2) : id(i), name(nm), rate(r), quantity(q) {}
    friend istream &operator>>(istream &is, product &prd)
    {
        is >> prd.id;
        is.ignore();
        getline(is, prd.name);
        is >> prd.rate;
        is >> prd.quantity;
        is.ignore();
        return is;
    }

    friend ostream &operator<<(ostream &os, const product &prd)
    {
        os << prd.id << endl;
        os << prd.name << endl;
        os << prd.rate << endl;
        os << prd.quantity << endl;
        return os;
    }
};
void serialize(product Product)
{
    ofstream outFile("Brand.txt");
    if (outFile.is_open())
    {
        outFile << Product;
        outFile.close();
    }
    else
    {
        cerr << "File opening Error for writing" << endl;
    }
}
void deSerialize(product &Product)
{
    ifstream inFile("Brand.txt");
    if (inFile.is_open())
    {
        inFile >> Product;
        inFile.close();
    }
}

int main()
{
    product p2(1, "Soap", 20, 2);
    serialize(p2);
    product p3;
    deSerialize(p3);
    cout << "Object Retrived from File product.txt";
    cout << endl << p3 << endl;
}
