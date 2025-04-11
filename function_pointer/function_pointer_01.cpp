 #include<iostream>
 using namespace std;

        int add(int a, int b) {
            return a + b;
        }
        int sub(int a, int b) {
            return a - b;
        }
        int mul(int a, int b) {
            return a * b;
        }
        int div(int a, int b) {
            
            return a / b;
        }
        int (*ptrfn) (int ,int);
 int main(){

    ptrfn=mul;
    int result=ptrfn(87,56);  
    cout<<"Result ="<<result<<endl;
    return 0;

 }