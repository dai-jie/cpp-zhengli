#include<iostream>
using namespace std;

class Point{
	int x,y;
	static int count;
public:
	Point(int xx=0,int yy=0);
	int getX(){
		return x;
	}
	int getY(){
		return y;
	}
	Point(Point &p){
		x=p.x;
		y=p.y;
		count++;
	}
	~Point(){count--;}
	void showCount(){
		cout<<"Count:"<<count<<endl;
	}
	static void ShowCount(){
		cout<<"Count:"<<count<<endl;
	}
};
Point::Point(int x,int y):x(x),y(y){
	count++;
}
void test(Point p){}
int Point::count=0;
int main(){
	Point::ShowCount();
	Point a(1);
	cout<<"Point A:"<<a.getX()<<","<<a.getY();
	a.showCount();
	Point b(a);
	cout<<"Point B:"<<b.getX()<<","<<b.getY();
	b.showCount();
	test(b);
	b.showCount();

	return 0;
}