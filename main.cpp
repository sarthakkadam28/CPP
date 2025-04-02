#include <iostream>
#include <string.h>
#include "customer.h" //before insert a name plz check .h folder name
using namespace std;
using namespace CRM;

int main()
{
    Customer c;
    Customer custminfo(23,"adityamore","3456748656","adityamaore@34gmail.com",20);

    cout << "Welcome to ECommerce" << endl;
    cout << "ID:" << c.getId() << endl;
    cout << "fullname " << c.getfullName() << endl;
    cout << "ContactNumber" << c.getcontactNumber() << endl;
    cout << "email" << c.getemail() << endl;
    cout << "age" << c.getage() << endl;

    cout << "Welcome to ECommerce" << endl;
    cout << "ID:" << custminfo.getId() << endl;
    cout << "fullname " << custminfo.getfullName() << endl;
    cout << "ContactNumber" << custminfo.getcontactNumber() << endl;
    cout << "email" << custminfo.getemail() << endl;
    cout << "age" << custminfo.getage() << endl;
}
