 #include<iostream>
 #include<string>
 using namespace std;
 class Point{
       private:
            int x,y;
       public:
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
          Point(){
            x=y=0;
          }
          Point(int xx,int yy){
            x=xx;
            y=yy;
          }
          void display() const{
            cout<< "( "<<x<< ", " <<y<< ")"<<endl;
          }

 };
 class Shape{
     protected:
               int thicknes;
               string colour;
     public :
             Shape(){
                thicknes=17;
                colour="black";
             }
             Shape(int t,string c){
                t=thicknes;
                c=colour;
            }
        };
 class Line:Shape{
    public:
          Point startpoint;
          Point endpoint;
        Line(){
            Point pt(0,0);
            startpoint=pt;
            endpoint=pt;
            thicknes=1;
            colour="black";
        } 
        Line(Point pt1,Point pt2,int t,string c){
            startpoint=pt1;
            endpoint=pt2;
            thicknes=t;
            colour=c;
        }
        void display(){
            cout<<"linr attributes"<<endl;
            cout<<"startPoint:("<< startpoint.getX()<<" ,"<<startpoint.getY()<<")"<<endl;
            cout<<"endPoint:("<< endpoint.getX()<<","<<endpoint.getY()<<")"<<endl;
            cout<<"thickness:"<<thicknes<<endl;
            cout<<"colour:"<<colour<<endl;
        }

 };
 class Circle:Shape{
 public:
       Point center;
       int radius;
     Circle(){
        Point pt(0,0);
        center=pt;
        thicknes=1;
        colour="white";
     }
     Circle(Point pt,int r,int t,string c){
        center=pt;
        radius=r;
        thicknes=t;
        colour=c;
     }
     void display(){
        cout<<"Circle attributes"<<endl;
        cout<<"Center :("<<center.getX()<<" ,"<<center.getY()<<")"<<endl;
        cout<<"Radius: "<<radius <<endl;
        cout<<"Thickness: "<<thicknes<<endl;
        cout<<"Color: "<<colour <<endl;  
    }
     
 };
 int main(){
    cout <<"Reusibility using Inheritance"<<endl;
 }