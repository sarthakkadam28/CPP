#include <iostream>
using namespace std;
inline int square(int x){
    return x*x;
}
int main(){
int num=5;
int res=square(num);
cout <<"the square of"<<num<<"is "<<res<<endl;
return 0;
}
