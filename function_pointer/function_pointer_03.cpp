#include <iostream>

int add(int a, int b) {
    return a + b;
}

int main() {
    int (*operation)(int, int) = add;
    std::cout << "Result: " << operation(5, 3) << std::endl;
    return 0;
}