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
            count++;
             }
     //parameter construction 
         Customer(int i, string n, string c, string e, int a){
            cout<<"constructor is called"<<endl;
             id=i;
             fullName=n;
             contactNumber=c;
             email=e;
             age =a;
             count++;
            }
            ~Customer(){
                cout<<"Destructor is called"<<endl;
                count--;

            }
        
        };
    }  
    
    
using namespace CRM;
 int Customer::count=0;
int main()
{
    Customer c;
    Customer c1(23,"adityamore","3456748656","adityamaore@34gmail.com",20);
    Customer c2(24,"asfhj","3456748657","adityamaore@3xzgmail.com",50);
    Customer c4(25,"adfgd","3456748654","addfvvge@14gmail.com",60);
     for(int i=0;i<=3;i++){
    Customer c3(26,"adghhg","3456748650","aditgfhfb@33gmail.com",70);
    Customer c4(27,"aditjhhgj","3456748659","adizgfzefd@34gmail.com",10);
    Customer c5(28,"adigxhnxgjh","3456748658","aditydff@37gmail.com",60);
     }
    cout<<"Number of objects  "<<Customer::count<<endl;
}

   
   