#include<iostream>
using namespace std;

//Abstraction

//content class
class Point{
    private : int x;
              int y;
    public  :
            void setX(int xx){
                x=xx;
            }
            int getX(){
                return x;
            }
            void setY(int yy){
                y=yy;
            }
            int getY(){
                return y;
            }
};


//Container class
class Circle{
    private :
            int radius;
            Point center;

    public :
            //default constructor
            Circle(){
                radius=10;
            }
            void setRadius(int r){
                radius=r;
            }
            int getRadius(){
                return radius;
            }

            void setCenterPoint(Point p){
                center.setX(p.getX());
                center.setY(p.getY());
            }

            Point getCenterPoint(){
                return center;
            }
};

class Line{
    private: 
        Point startPoint;
        Point endPoint;
    public:
         void setstartPoint(Point p1){
            startPoint=p1;
         }
         Point getstartpoint(){
            return startPoint;
         }
         void setendPoint(Point p2){
            endPoint=p2;
         }
         Point getendpoint(){
            return endPoint;
         }


};

class Traingle{
    private :
        Point  pt1;
        Point pt2;
        Point pt3;

    public:
          void setPt1(Point p){
             pt1=p;
     }
     Point getPt1(){
        return pt1;
     }
     void setPt2(Point p){
         pt2=p;
     }
     Point getPt2(){
        return pt2;
     }
     void setPt3(Point p){
        pt3=p;
    }
    Point getPt3(){
       return pt3;
    }

};


int main(){
    Point p1;
    p1.setX(56);
    p1.setY(76);

    Circle c1;
    c1.setCenterPoint(p1);
    c1.setRadius(5);
    cout<<p1.getX()<<","<<p1.getY()<<endl;
    cout<<"Radius ="<<c1.getRadius();
    
    Line l1;
    Point p2;
    p2.setX(30);
    p2.setY(40);
    l1.setstartPoint(p1);
    l1.setendPoint(p2);
    cout<<p2.getX()<<","<<p2.getY()<<endl;
      
    Traingle t1;
    Point p4;
                                                                               

    t1.setpt1(p);
    t1.setY(34);
    t1.getPt1();
    t1.getPt2();
    t1.getPt3();
    cout<<p3.getX()<<","<<p3.getY()<<endl; 


}