#include <iostream>
#include <fstream>
#include <string>

using namespace std;
class Account
{  
private:
        double balance ;
        int id;
        string holderName;
public:
        Account(int b=0,int i=0,string holdernm=" "):balance(b),id(i),holderName(holdernm){}
        friend istream &operator>>(istream &is, Account& acc)
        {
            is >> acc.balance;
            is.ignore();
            getline(is, acc.holderName );
            is >> acc.id;
            is.ignore();
            return is;
        }
    
        friend ostream &operator<<(ostream &os, const Account& acc)
        {
            os << acc.balance<< endl;
            os << acc.holderName << endl;
            os << acc.id << endl;
        
            return os;
        }
        void deposit(int amount) {
            if (amount > 0) {
                balance =balance+amount;
                cout << "Deposite" << amount << endl;
            }
        }
        void withdraw(int amount)  {
            if (amount > 0 && balance >= amount) {
                balance=balance-amount;
                cout << "Withdraw:" << amount << endl;
            } else {
                cout << "invalid amount" << endl;
            }
        }
        void display(){
            cout<<"holdername="<<holderName<<endl;
            cout<<"id="<<id<<endl;
            cout<<"balance="<<balance<<endl;
          
        }
        void serialize(Account account)
        {
            ofstream outFile("bank.dat");
            if (outFile.is_open())
            {   
                outFile <<holderName<<endl;
                outFile << id<<endl;
                outFile << balance<<endl;
                outFile.close();
            }
            else
            {
                cerr << "File error" << endl;
            }
        }
        
        void deserialize(Account& account){
            ifstream infile("bank.dat");
            if (infile.is_open())
            {
                infile >>id;
                infile.ignore(); 
                infile >> balance;
                infile >>holderName;
                infile.close();
            }
            else
            {
                cerr << "File error" << endl;
            }
        }
    };
   int main(){ 
    Account a1(12000,3,"sathish");
    a1.deposit(2000);
    a1.withdraw(3000);
    a1.display();
    a1.serialize(a1);
     Account a2;
     a2.deserialize(a2);
     cout << "Object Retrived from File product.dat";
    cout << endl << a2 << endl;

   }






