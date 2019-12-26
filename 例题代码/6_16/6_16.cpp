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
};
int main(){
	cout<<"Step one:"<<endl;
	Point *ptr=new Point();
	delete ptr;
	cout<<"Step two:"<<endl;
	Point *ptr2=new Point(4,5);
	delete ptr;
	return 0;
}