#ifndef _POINT_H_
#define _POINT_H_
class Point{
	float x,y;
public:
	Point(float xx=0,float yy=0):x(xx),y(yy){ };
	float getX() const{return x;}
	float getY() const{return y;}
	friend float lineFit(const Point points[],int nPoint);
};

#endif