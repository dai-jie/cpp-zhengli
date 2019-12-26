#include<iostream>
#include<cmath>
using namespace std;

const double TINY_VALUE=1e-10;

double tsin(double x){
	int n=1;
	double fx=x;
	double f=0;
	do{
		f=(n%4==1)?f+fx:f-fx;
		fx=x*x*fx/(n+1)/(n+2);
		n+=2;
	}while(fx>TINY_VALUE);
	return f;
}

int main(){
	double k,r,s;
	cout<<"r=";
	cin>>r;
	cout<<"s=";
	cin>>s;
	if(r*r<=s*s)
		k=sqrt(tsin(r)*tsin(r)+tsin(s)*tsin(s));
	else
		k=1/2.*tsin(r*s);
	cout<<k<<endl;
	return 0;
}