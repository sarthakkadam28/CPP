#include <iostream>
#include <string.h>
using namespace std;
namespace CRM
{
    class Customer
    {
    private:
        int id;
        string fullName;
        string contactNumber;
        string email;
        int age;
    public:
      void setId(int i){
        id=i;
    }
    int getId(){
        return id;
    }

    void setfullName(string nam){
        fullName=nam;
    }
    string getfullName(){
        return fullName;
    }

    void setcontactNumber(string no){      
        contactNumber=no;
    }
    string getcontactNumber(){
        return contactNumber;
    }

    void setemail(string mail){
        email=mail;
    }
    string getemail(){
        return email;
    }
    void setage(int a){
        age = a;
    }
    int getage(){
        return age;
    }
 //defalut construction 
   Customer(){
       id=23;
       fullName="sarthak kadam";
       contactNumber="93676452424";
       email="sarthakkadam123@gmail.com";
       age =21;
        }
//parameter construction 
    Customer(int i, string n, string c, string e, int a){
        id=i;
        fullName=n;
        contactNumber=c;
        email=e;
        age =a;
    }
};
}