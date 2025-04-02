#include <iostream>
#include <fstream>
#include <string>
#include"repositorymanger.h"
 #include"account.h"
 #include"uimanger.h"
using namespace std;
using namespace Banking;

int main()
  {
      int choice;

      do{
              UIManager::showMenu();
              cin>>choice;
              cout<<endl<<"You have selected Option: "<<choice<<endl;
              switch(choice){
                  case 1:         
                  cout<<" Your Account Details :"<<endl;
                  break;
                  case 2:
                  cout<<" Account Opening :"<<endl;
                  RepositoryManager::saveAccountDetails();
                  cout<<" Account has been successfully Opened in Bank"<<endl;
                  break;
                  case 3:
                          { 
                              RepositoryManager::getAccountDetails();
                              RepositoryManager::currentAccount.display();
                              cout<<endl<<" Depositing Amount"<<endl;
                              double amount;
                              cout<< "Enter  Amount  to deposit";
                              cin>>amount;
                            
                              RepositoryManager::currentAccount.deposite(amount);
                              RepositoryManager::currentAccount.display();
                          }
                  break;
                  case 4:
                          {
                              RepositoryManager::getAccountDetails();
                              RepositoryManager::currentAccount.display();
  
                              cout<<endl<<"Withdrawing Amount "<<endl;
                              double amount;
                              cout<< "Enter  Amount  to withdraw ";
                              cin>>amount;
                              cout<<" The amount = "<<amount;
                              RepositoryManager::currentAccount.withdraw(amount);
                              RepositoryManager::currentAccount.display();
                          }
                  break;
                  case 5:
                      cout<<" You have decided to extit"<<endl;
                  break;
              }
          }
      while(choice !=5);
      cout<<"Thank you for visiting HDFC Bank"<<endl;
      return 0;
      }