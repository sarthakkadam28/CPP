 #include"line.h"
 #include<iostream>
 using namespace std;
 namespace Drawing{
   Line::Line(){
        Point pt(0,0);
        startpoint=pt;
        endpoint=pt;
        thickness=1;
        colour="black";
    } 
    Line::Line(Point pt1,Point pt2,int t,string c){
        startpoint=pt1;
        endpoint=pt2;
        thickness=t;
        colour=c;
    }
    void Line:: display(){
        cout<<"linr attributes"<<endl;
        cout<<"startPoint:("<< startpoint.getX()<<" ,"<<startpoint.getY()<<")"<<endl;
        cout<<"endPoint:("<< endpoint.getX()<<","<<endpoint.getY()<<")"<<endl;
        cout<<"thickness:"<<thickness<<endl;
        cout<<"colour:"<<colour<<endl;
    }
}











 