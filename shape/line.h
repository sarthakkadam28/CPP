#ifndef  __LINE_H
#define __LINE_H

 #include"shape.h"
 #include "point.h"
 namespace Drawing{
    class Line: public Shape{
 public:
 Point startpoint;
 Point endpoint;
 Line();
 Line(Point pt1,Point pt2,int t,string c);
 void display();
 };
}
#endif