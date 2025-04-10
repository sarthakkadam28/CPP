 #include<iostream>
 using namespace std;
 class Shape
 {
 public:
     void virtual draw(){
        cout<<"draw a shape" << endl;
     }
     
 };
 class Circle : public Shape
 {
 public:
     void draw() override

     {
        Shape::draw();
         cout << "draw a circle " << endl;
     }
 };
 class Rectangle : public Shape
 {
 public:
     void draw() override
     {
         std::cout << "Draw a rectangle" << std::endl;
     }
 };
 int main()
 {
     Shape *shape1 = new Circle();
     Shape *shape2 = new Rectangle();
     shape1->draw();
     shape2->draw();
 }