//A constant function in C++ is a member function that does not modify any member variables of the class. 
//It is declared using the const keyword at the end of the function declaration.

#include <iostream>
#include <string.h>
using namespace std;
namespace CRM
{
    class Customer
    {
    public:
        static int count;
        int id;
        string fullName;
        string contactNumber;
        string email;
        int age;

        Customer(){
            cout<<"constructor is called"<<endl;
            id=23;
            fullName="sarthak kadam";
            contactNumber="93676452424";
            email="sarthakkadam123@gmail.com";
            age =21;
            
             }
     //parameter construction 
         Customer(int i, string n, string c, string e, int a){
            cout<<"constructor is called"<<endl;
             id=i;
             fullName=n;
             contactNumber=c;
             email=e;
             age =a;
             
            }
            ~Customer(){
                cout<<"Destructor is called"<<endl;
                count--;

            }
            void showdetails()const{
                cout<<"fullname"<<""<<"email"<<endl;

            }
        };
    }

using namespace CRM;
int main()
{



    Customer c1 ;
    c1.showdetails();
    
    
}

