 #include"shape.h"
 #include<iostream>
 #include<string>

 using namespace std;
 namespace Drawing{

  Shape::Shape(){
     thickness=17;
     colour="black";
  }
  Shape::Shape(int t,string c){
     t=thickness;
     c=colour;
 }
 void Shape::display(){
    cout<< "Shappe attributes"<<endl;
    cout<<"Thickness: "<<thickness <<endl;
    cout<<"Color: "<<colour <<endl;   
}
 }
 