 #include<iostream>
 using namespace std;
 class Account {
    private:
             int id ;
             string holder;
             double balance;
    public: 
           Account(){

           }
           Account(int i,string name,double amount){
            id =i;
            holder=name;
            balance=amount;
            }
    void setid(int i){
           id=i;
    }
    void getid( ){
        return id;
    }
    void setHolder(string name){
        holder=name;
    }

    string getHolder(){
        return holder;
    }

    void setBalance(double amount){
        balance=amount;
    }

    double getBalance(){
        return balance;
    }

    void deposit(float amount){
        balance=balance+ amount;
    }

    void withdraw(float amount){
        balance=balance-amount;
    }
    static void fundtransfer(Account *ptrfromaccount,Account *ptrtoaccount,float amount){
        cout<<" fund transfer"<<endl;
        ptrfromaccount->withdraw(amount);
        ptrtoaccount->deposit(amount);
    }
    void show(){
        cout<<"Account ID: "<<id<<endl;
        cout<<"Account Holder"<<holder<<endl;
        cout<<"Account Balance"<<balance<<endl;
    }
    ~Account(){
        cout<<"Account Destructor is called"<<endl;
    }
};
int main(){
    cout<<"welcome to bank to bank of india"<<endl;
}