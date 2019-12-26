#include<iostream>
#include<iomanip>
using namespace std;

double arctan(double x){
	double sqr=x*x;
	double e=x;
	double f=0;
	int i=1;
	while(e/i>10e-15){
		double fx=e/i;
		f=(i%4==1)?f+fx:f-fx;
		i+=2;
		e=sqr*e;
	}
	return f;
}

int main(){
	double a=arctan(1/5.);
	double b=arctan(1/239.);

	cout<<"PI="<<setprecision(10)<<16*a-4*b<<endl;
	return 0;
}