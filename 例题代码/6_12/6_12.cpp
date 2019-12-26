#include<iostream>
using namespace std;

class Point{
	int x,y;
public:
	Point(int x=0,int y=0):x(x),y(y){}
	int getX() const{return x;}
	int getY() const{return y;}
};
int main(){
	Point a(4,5);
	Point *ptr=&a;
	cout<<ptr->getX()<<endl;
	cout<<a.getX()<<endl;
	return 0;
}