#include <iostream>
using namespace std;


int add(int a, int b) {
    return a + b;
}

//callback 
int mult(int a, int b) {
    return a * b;
}

//declare function pointer 
int (*ptrfn) (int, int);

int main (){
   
    ptrfn=mult;
    ptrfn=add;
    int result=ptrfn(87,56);
    int result2 =ptrfn(34,85);  
        
    cout<<"Result ="<<result<<endl;
    cout<<"result ="<<result2<<endl;
    
}