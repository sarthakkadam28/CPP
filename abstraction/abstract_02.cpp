#include<iostream>
using namespace std;
class Vehical{
    private: 
          void piston(){
            cout<<"4 pistons"<<endl;
          } 
          void cylinder(){
            cout<<"4 cylinder"<<endl;
          }
          void engine(){
            cout<<"4 stroke engine"<<endl;
          }
    public:
          void customer(){
              cout <<"no of customers "<<endl;
          }
          void customername(){
            cout<<"customers name "<<endl;
          }
          void customerrequriment(){
            cout <<"plz enter the customerrequriment"<<endl;
          }
};
int main(){
    Vehical veh;
    //veh.piston();
    //veh.cylinder();
    //veh.engine();
    veh.customer();
    veh.customername();
    veh.customerrequriment();
}