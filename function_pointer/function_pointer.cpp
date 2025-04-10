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
    int result=ptrfn(87,56);  
                              
    cout<<"Result ="<<result<<endl;
}