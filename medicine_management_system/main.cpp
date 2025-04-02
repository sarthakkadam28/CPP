#include <iostream>
#include <fstream>
#include <string>
#include"repository_manager.h"
 #include"medicine.h"
 #include"uimanager.h"
using namespace std;
using namespace Medicining;

int main()
  {
      int choice;
      RepositoryManager repoManager;
      do{
              UIManager::showMenu();
              cin>>choice;
              cout<<endl<<"You have selected Option: "<<choice<<endl;
              Medicine newMedicine; 
              switch(choice){
                  case 1:         
                  cout<<" Add your medicine :"<<endl;
                  cin >> newMedicine; 
                  repoManager.addMedicine(newMedicine);
                  cout << "Medicine added successfully!" << endl;
                  break;
                  case 2:
                  cout<<" Medicine information :"<<endl;
                  RepositoryManager::saveMedicineDetails();
                  cout<<" medicine inforamation as per below"<<endl;
                  break;
                  case 3:
                          { 
                              RepositoryManager::getMedicineDetails();
                              RepositoryManager::currentMedicine.display();
                              cout<<endl<<" Depositing Amount"<<endl;
                              double amount;
                              cout<< "Enter  Amount  to deposit";
                              cin>>amount;
                            
                              RepositoryManager::currentMedicine.deposite(amount);
                              RepositoryManager::currentMedicine.display();
                          }
                  break;
                  case 4:
                          {
                              RepositoryManager::getMedicineDetails();
                              RepositoryManager::currentMedicine.display();
  
                              cout<<endl<<"Withdrawing Amount "<<endl;
                              double amount;
                              cout<< "Enter  Amount  to withdraw ";
                              cin>>amount;
                              cout<<" The amount = "<<amount;
                              RepositoryManager::currentMedicine.withdraw(amount);
                              RepositoryManager::currentMedicine.display();
                          }
                  break;
                  case 5:
                      cout<<" You have decided to extit"<<endl;
                  break;
              }
          }
      while(choice !=5);
      cout<<"Thank you for visiting Medicore"<<endl;
      return 0;
      }