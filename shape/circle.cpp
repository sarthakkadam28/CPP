 
#include "circle.h"
#include <iostream>

using namespace std;

namespace Drawing
{
    Circle::Circle(){
        Point pt(0,0);
        center=pt;
        thickness=1;
        colour="black";
    }

    Circle::Circle(Point pt, int r,  int t, string c){
        center=pt;
        radius=r;
        thickness=t;
        colour=c;
    }

    void Circle::display(){
        cout<< "Circle  attributes"<<endl;
        cout<<"Center: ("<< center.getX()<< ", "<<center.getY()<< ")"<<endl;
        cout<<"Radius: "<<radius <<endl;
        cout<<"Thickness: "<<thickness <<endl;
        cout<<"Color: "<<colour <<endl;  
    }
}
