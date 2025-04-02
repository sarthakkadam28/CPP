#include <iostream>
#include <string>
#include "point.h"
#include "shape.h"
#include "line.h"
#include "circle.h"
using namespace std;
using namespace Drawing;

int main(){
    cout <<"Reusibility using Inheritance"<<endl;
     Shape s;
     s.display();

     Shape s2(3,"blue");
     s2.display();

     Point p1(22,45);
     Point p2(34,56);

     Line l1(p1,p2,6,"red");
     l1.display();

     Point p3(56,40);
     Point p4(30,56);

     Line l2(p3,p4,56,"white");
     l2.display();

     Point p5(100,150);
    
     Circle c1(p1,29,6, "black");
    c1.display();

}