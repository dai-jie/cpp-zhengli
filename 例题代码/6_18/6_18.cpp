#include<iostream>
#include<cassert>
using namespace std;

class Point{
	int x,y;
public:
	Point():x(0),y(0){
	cout<<"Default Constructor called."<<endl;
	}
	Point(int x,int y):x(x),y(y){
	cout<<"Constructor called."<<endl;
	}
	Point(Point &p){
		cout<<"Copy constructor called."<<endl;
	}
	~Point(){cout<<"Desructor called."<<endl;}
	void move( int newX,int newY){
		x=newX;
		y=newY;
	}
};
class ArrayOfPoints{
	int size;
	Point *points;
public:
	ArrayOfPoints(int size):size(size){
		points=new Point[size];
	}
	~ArrayOfPoints(){
		cout<<"Deleting..."<<endl;
		delete[] points;
	}
	Point& element(int index){
		assert(index>=0&&index<size);
		return points[index];
	}
};
int main(){
	int count;
	cout<<"Please enter the count of points:";
	cin>>count;
	ArrayOfPoints points(count);
	points.element(0).move(5,0);
	points.element(1).move(15,20);
	return 0;
}