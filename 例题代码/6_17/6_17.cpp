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
	~Point(){cout<<"Desructor called."<<endl;}
	void move( int newX,int newY){
		x=newX;
		y=newY;
	}
};
int main(){
	Point *ptr=new Point[2]();
	ptr[0].move(5,10);
	ptr[1].move(15,20);
	cout<<"Deleting..."<<endl;
	delete[] ptr;
	return 0;
}