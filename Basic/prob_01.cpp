#include <iostream>
using namespace std;
 class increment{

public:
    void printNumbers() {
        for (int i = 1; i < 11; ++i) {
            cout << i << endl;
            return;
        }
        cout<<"out of the fuction"<<endl;
    }
};
int main(){
    increment inc;
    inc.printNumbers();
    return 0;
}
