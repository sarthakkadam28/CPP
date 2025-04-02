#include"repository_manager.h"
#include"medicine.h"
#include<fstream>
#include<iostream>
#include <string>
using namespace std;

namespace Medicining{
    Medicine RepositoryManager::currentMedicine( 24,"coffcials ","tablet",10,20);

     void RepositoryManager::saveMedicineDetails()
    {
        ofstream outFile("medicine.dat");
        if (outFile.is_open())
        {
            currentMedicine.serialize(outFile);
            outFile.close();
            cout << "Object serialized to medicine.dat" << std::endl;
        }
    }
     void RepositoryManager::getMedicineDetails(){
        ifstream inFile("medicine.dat");
        if (inFile.is_open()) 
        {
            currentMedicine.deserialize(inFile);
            inFile.close();
            cout << "Object deserialized from medicine.dat" << std::endl;
        }  
    }
   }