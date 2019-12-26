#ifndef _POINT_H_
#define _POINT_H_
class Point{
	int x,y;
public:
	Point();
	Point(int x,int y);
	~Point();
	void move(int newX,int newY);
	int getX() const{return x;}
	int getY() const{return y;}
};
#endif