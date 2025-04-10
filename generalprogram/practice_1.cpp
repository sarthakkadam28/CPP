 #include<iostream>
 using namespace std;
 class sample
 {
    private: 
         int data;
 public:  
       sample(int value):data(value){}
        friend void displaydata(const sample &obj);
 };
       void displaydata(const sample &obj){
        cout<<"data:"<<obj.data<<endl;
    
       }
       int main(){
        sample s(10);
        displaydata(s);
        return 0;
       }
    