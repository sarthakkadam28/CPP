#include <iostream>
using namespace std;
class calculator
{
public:
      int addition(int opt1,int opt2){
        int result=opt1+opt2;
        return result ;
      }
      int substraction(int opt1,int opt2){
       int result=opt1-opt2;
        return result;
      }
      int multiplication(int opt1,int opt2){
        int result=opt1*opt2;
        return result;
      }
      int divison(int opt1,int opt2){
        int result=opt1/opt2;
    }
};
int main(){
    int option=1;
    int result=0;
    int opt1=12;
    int opt2=23;
    calculator calc;
    while(1){
        cout<<"enter your option"<<endl;
        cout <<"option1:addition"<<endl;
        cout<<"option2:substraction"<<endl;
        cout<<"option3:multiplication"<<endl;
        cout<<"option4:divison"<<endl;
        cout<<"option5:exit"<<endl;
        cin>>option;
    
        switch(option){
            case 1:
                result=calc.addition(opt1,opt2);
                break;
            case 2:
                result=calc.substraction(opt1,opt2);
                break;
            case 3:
                result=calc.multiplication(opt1,opt2);
                break;
            case 4:
                result=calc.divison(opt1,opt2);
                break; 
            case 5:
                return 0;
                break;                  
        }
             cout<<"result="<<result<<endl;
     }
            return 0;      
}
             
    
    
