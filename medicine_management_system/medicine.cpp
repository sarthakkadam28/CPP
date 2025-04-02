 #include<iostream>
 #include<fstream>
 #include<string>
 #include"medicine.h"
 using namespace std;
 namespace Medicining{
    Medicine::Medicine( int mei,string nm,string cat,float pr,int qut ):medID(mei),name(nm),category(cat),price(pr),quantity(qut){}
    
    void Medicine::setId(int mei){
        medID=mei;
    }
    int Medicine::getId(){
        return medID;
    };
    void Medicine::setName( string nm){
        name=nm;
    } 
    string Medicine::getName(){
        return name;
    }
    void Medicine::setCategory( string cat){
        category=cat;
    }
    string Medicine::getCategory(){
        return category;
    }
    void Medicine::setPrice( float pr){
        price=pr;
    }
    float Medicine::getPrice(){
        return price;
    }
    void Medicine::setQuantity( int qut){
        quantity=qut;
    }
    int Medicine::getQuantity(){
        return quantity;
    }
    void Medicine::display()const{
        cout<<"current medicine details"<<endl;
        cout<<"Id: "<<medID<<" Name: "<<name<<" Category: "<<category<<"price:"<<price<<"quntity:"<<endl;
    }
    void Medicine::addMedicine(){
    cout<<" Add your medicine :"<<endl;
    cin >> newMedicine; 
    RepositoryManager.addMedicine(newMedicine);
    cout << "Medicine added successfully!" << endl;
    }
    
    void Medicine::serialize(ofstream& outFile){
        outFile<<medID<<std::endl;
        outFile<<name<<std::endl;
        outFile<<category<<std::endl;
        outFile<<price<<std::endl;
    }
    void Medicine::deserialize(ifstream& inFile){
        inFile>>medID;
        inFile.ignore();
        inFile>>name;
        getline(inFile, name);
        inFile>>category;
        getline(inFile,category);
        inFile >> price;
        inFile.ignore();
        inFile>>quantity;
    }
istream& operator>>(istream& is,Medicine& med)
{
    is>>med.medID;
    is.ignore();
    getline(is, med.name);
    is.ignore();
    getline(is,med.category);
    is.ignore();
    is>>med.price;
    is.ignore();
    is>>med.quantity;
    return is;
}  

ostream& operator<<(ostream& os,const Medicine& med)
{
        os<<med.medID<<endl;
        os<<med.name<<endl;
        os<<med.category<<endl;
        os<<med.price<<endl;
        os<<med.quantity<<endl;
        return os;
}

}




    






















 