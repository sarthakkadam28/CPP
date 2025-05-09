#include <iostream>

class Rectangle {
private:
    int width, height;
public:
    Rectangle(int w, int h) : width(w), height(h) {}

    // Declare the function as inline
    // inline int getArea() const;
};

// Define the inline function outside the class
inline int Rectangle::getArea() const {
    return width * height;
}

int main() {                           
    Rectangle rect(5, 10);
    std::cout << rect.getArea() << std::endl; // No function call overhead
}