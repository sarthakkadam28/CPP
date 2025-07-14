// pointer to member function
#include <iostream>

class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }
};

int main() {
    Calculator calc;
    // Pointer to member function
    int (Calculator::*func_ptr)(int, int) = &Calculator::add;

    // Call using object and pointer
    std::cout << "Result: " << (calc.*func_ptr)(10, 20) << std::endl;
    return 0;
}
// This code demonstrates the use of a pointer to a member function in C++.C