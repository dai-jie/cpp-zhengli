#include<iostream>
#include<cmath>
using namespace std;

class Point{
	int x,y;
public:
	Point(int xx=0,int yy=0):x(xx),y(yy){ }
	int getX(){return x;}
	int getY(){return y;}
	friend float dist(const Point &a,const Point &b);
};
float dist(const Point &p1,const Point &p2){
	double x=p1.x-p2.x;
	double y=p1.y-p2.y;
	return static_cast<float>(sqrt(x*x+y*y));
}
int main(){
	const Point p1(1,2),p2(4,5);
	cout<<"The distance is: ";
	cout<<dist(p1,p2)<<endl;
	return 0;
}