#include <iostream>
using namespace std;

int main() {
    int n, i = 2, sum = 0;

    cout << "Enter a number: ";
    cin >> n;

    while (i <= n) {
        sum += i;
        i += 2; 
    }

    cout << "Sum of all even numbers from 1 to " << n << " is: " << sum << endl;

    return 0;
}
