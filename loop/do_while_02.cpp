#include <iostream>
using namespace std;
int main (){
    int choice;
    do
    {
    cout << "menu"<<endl;
    cout <<"1. print hello"<<endl;
    cout <<"2. print bye "<<endl;
    cout <<"3. exit "<<endl;
    cout <<"enter your choice ";
    cin>>choice;
    switch (choice)
    {
    case 1:cout<<"hello"<<endl;
        break;
    case 2:cout<<"bye"<<endl;
        break;
    case 3:cout<<"exit"<<endl;
        break;    
    
    default: cout<<"Invalid choice";
    }
}
    while (choice!=0);
    
    return 0;
     
}