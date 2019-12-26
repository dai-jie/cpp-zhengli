#include"Point.h"
#include<iostream>
#include<cmath>
using namespace std;

float lineFit(const Point points[],int nPoint){
	float avgX=0,avgY=0,r=0;
	float lxx=0,lyy=0,lxy=0;
	float a=0,b=0;
	for(int i=0;i<nPoint;i++){
		avgX+=points[i].x/nPoint;
		avgY+=points[i].y/nPoint;
	}
	for(int i=0;i<nPoint;i++){
		lxx+=(points[i].x-avgX)*(points[i].x-avgX);
		lxy+=(points[i].x-avgX)*(points[i].y-avgY);
		lyy+=(points[i].y-avgY)*(points[i].y-avgY);
	}
	a=lxy/lxx;
	b=avgY-a*avgX;
	r=lxy/sqrt(lxx*lyy);
	cout<<"This line can be fitted by y=ax+b."<<endl;
	cout<<"a="<<a<<" ";
	cout<<"b="<<b<<endl;
	return r;
}
int main(){
	Point p[10]={Point(6,10),Point(14,20),Point(26,30),Point(33,40),
		Point(46,50),Point(54,60),Point(67,70),
		Point(75,80),Point(84,90),Point(100,100)};
	float r=lineFit(p,10);
	cout<<"Line coefficient r="<<r<<endl;
	return 0;
}