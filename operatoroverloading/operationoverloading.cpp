#include <iostream>
#include <string>
using namespace std;
class Complex
{
private:
    int imag;
    int real;

public:
    Complex()
    {
        imag = real = 0;
    }

    Complex(int r, int i)
    {
        real = r;
        imag = i;
    }
    friend istream &operator>>(istream &is, Complex &c)
    {

        cout << "Enter Complex Number" << endl;
        cout << "real" << endl;
        is >> c.real;
        cout << "imag" << endl;
        is >> c.imag;
        return is;
    }
    friend ostream &operator<<(ostream &os, const Complex &c)
    {
        os << c.real << " + " << c.imag << "i" << endl;
        return os;
    }
    Complex operator+(const Complex &other) const
    {
        Complex temp;
        temp.real = this->real + other.real;
        temp.imag = this->imag + other.imag;
        return temp;
    }
    ~Complex()
    {
    }
};
int main()
{
    Complex c1;
    Complex c2;
    cin >> c1;
    cin >> c2;

    cout << c1;
    cout << c2;

    Complex c3 = c1 + c2;
    cout << " Addition of two complex numbers : " << endl;
    cout << c3;
}