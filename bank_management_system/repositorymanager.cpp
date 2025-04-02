 #include"repositorymanger.h"
 #include"account.h"
 #include<fstream>
 #include<iostream>
 #include <string>
 using namespace std;

namespace Banking{
     Account RepositoryManager::currentAccount( 24,"mangesh ",24888);

      void RepositoryManager::saveAccountDetails()
     {
         ofstream outFile("accounts.dat");
         if (outFile.is_open())
         {
             currentAccount.serialize(outFile);
             outFile.close();
             cout << "Object serialized to people.dat" << std::endl;
         }
     }
      void RepositoryManager::getAccountDetails(){
         ifstream inFile("accounts.dat");
         if (inFile.is_open()) 
         {
             currentAccount.deserialize(inFile);
             inFile.close();
             cout << "Object deserialized from people.dat" << std::endl;
         }  
     }
    }