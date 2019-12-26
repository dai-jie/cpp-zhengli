#include<iostream>
#include<cassert>
using namespace std;
#include<iostream>
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
	void move(int newX,int newY){
		x=newX;
		y=newY;
	}
	int getX(){return x;}
	int getY(){return y;}
	~Point(){cout<<"Desructor called."<<endl;}
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
	ArrayOfPoints pointsArray1(count);
	pointsArray1.element(0).move(5,10);
	pointsArray1.element(1).move(15,20);
	ArrayOfPoints pointsArray2(pointsArray1);
	cout<<"Copy of pointsArray1:"<<endl;
	cout<<"Point_0 of array2:"<<pointsArray2.element(0).getX()<<","<<
		pointsArray2.element(0).getY()<<endl;
	cout<<"Point_1 of array2:"<<pointsArray2.element(1).getX()<<","<<
		pointsArray2.element(1).getY()<<endl;

	pointsArray1.element(0).move(25,30);
	pointsArray1.element(1).move(35,40);
	cout<<"After the moving of pointsArray1:"<<endl;
	cout<<"Point_0 of array2:"<<pointsArray2.element(0).getX()<<","<<
		pointsArray2.element(0).getY()<<endl;
	cout<<"Point_1 of array2:"<<pointsArray2.element(1).getX()<<","<<
		pointsArray2.element(1).getY()<<endl;
	return 0;
}