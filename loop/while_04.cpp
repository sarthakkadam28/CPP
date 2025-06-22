#include <iostream>
using namespace std;

int main() {
    int n, reverse=0;

    cout << "Enter a number: ";
    cin >> n;

    while (n>0) {
        int num=n%10;
        reverse=reverse*10+num;
        n=n/10;
    }

    cout << "The reverse of the number is: " << reverse << endl;

    return 0;
}