#ifndef __ACCOUNT_H
#define __ACCOUNT_H


#include <fstream>
#include <string>
using namespace std;
namespace Banking
{
    class Account
    {
    private:
       
        int id;
        std::string name;
        double balance;

    public:
        Account(int i = 0, string nm = "", double amount = 0) ;
            void setId(int i);
            int getId();
            void setName(string nm);
            string getName();
            void setBalance( double ba);
            double getBalance();
        void deposite(double amount);
       
        void withdraw(double amount);
        
        friend istream &operator>>(istream &is, Account &prn);
        
        friend ostream &operator<<(ostream &os, const Account &prn);
        
        void serialize(ofstream &outFile);
        
        void deserialize(ifstream &inFile);
        
        void display() const;
       
    };
}
#endif