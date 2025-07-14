#include <iostream>

void compute(int x, int y, int (*func)(int, int)) {
    std::cout << "Computed: " << func(x, y) << std::endl;
}

int multiply(int a, int b) {
    return a * b;
}

int main() {
    compute(4, 5, multiply);
    return 0;
}
