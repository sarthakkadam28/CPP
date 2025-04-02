 #ifndef __MEDICINE_H
 #define __MEDICINE_H

 #include<fstream>
 #include<string>
 using namespace std;
 namespace Medicining{
    class Medicine
    {
    private:
    int medID;
    string name;
    string category;
    float price;
    int quantity;
    public:
    Medicine( int mei=34,string nm="",string cat="",float pr=200,int qut=12 );
    void  setId(int mei);
    int  getId();
    void setName( string nm);
    string  getName();
    void  setCategory( string cat);
    string  getCategory();
    void  setPrice( float pr);
    float  getPrice();
    void  setQuantity( int qut);
    int  getQuantity();
    void display()const;
    void addMedicine();
   friend istream &operator>>(istream& is,Medicine& med);

   friend ostream &operator<<(ostream& os,const Medicine& med);
   
   void serialize(ofstream& outFile);
   void deserialize(ifstream& inFile);
    };
}
#endif
    
    
       
    
