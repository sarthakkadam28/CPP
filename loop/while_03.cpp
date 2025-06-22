#include<iostream>
using namespace std;
int main(){
    int n;
    int sum=0;
    cout<<"enter a number"<<endl;
    cin>>n;
    while(n>0){
        sum=sum+n%10;
        n=n/10;
    }
    cout<<"the sum of digits is "<<sum<<endl;
    return 0;
}