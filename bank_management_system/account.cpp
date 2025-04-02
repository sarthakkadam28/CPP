#include<iostream>
#include "account.h"
#include <string>
#include<fstream>
using namespace std;
namespace Banking {
    Account::Account(int i, string nm, double amount) : id(i), name(nm), balance(amount){ }

void Account::setId (int i){
    id=i;
}
void Account::setName(string nm){
    name=nm;
}
string Account ::getName(){
    return name;
}
void Account::setBalance(double ba){
    balance=ba;
}
double Account ::getBalance(){
    return balance;
}
void Account::deposite(double amount){
    balance=balance+amount;
}
void Account::withdraw(double amount){
    balance=balance-amount;
}
void Account::display()const{
    cout<<"current account details"<<endl;
    cout<<"Id"<<id<<"Name"<<name<<"Balance"<<balance<<endl;
}
void Account::serialize(ofstream& outFile){
    outFile<<id<<std::endl;
    outFile<<name<<std::endl;
    outFile<<balance<<std::endl;
}
void Account::deserialize(ifstream& inFile){
    inFile>>id;
    inFile.ignore();
    inFile>>name;
    getline(inFile, name); 
    inFile >> balance;              
}

istream& operator>>(istream& is,Account& prn)
{
    is>>prn.id;
    is.ignore();
    getline(is, prn.name);
    is.ignore();
    is>>prn.balance;
    return is;
}  

ostream& operator<<(ostream& os,const Account& prn)
{
        os<<prn.id<<endl;
        os<<prn.name<<endl;
        os<<prn.balance<<endl;
        return os;
}

}
