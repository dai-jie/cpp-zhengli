#include<iostream>
using namespace std;

int Max1(int a,int b){
	return a>b?a:b;
}

int Max1(int a,int b,int c){
	if(a>b)
		if(a>c)
			return a;
		else
			return c;
	else if(b>c)
	return b;
	else return c;
}

double Max1(double a,double b){
	return a>b?a:b;
}

double Max1(double a,double b,double c){
	if(a>b)
		if(a>c)
			return a;
		else
			return c;
	else if(b>c)
	return b;
	else return c;
}

int main(){
	int a,b,c;
	double f1,f2,f3;
	cout<<"Please enter two integers";
	cin>>a>>b;
	cout<<"The max of them is:"<<Max1(a,b)<<endl;
	cout<<"Please enter three integers";
	cin>>a>>b>>c;
	cout<<"The max of them is:"<<Max1(a,b,c)<<endl;
	cout<<"Please enter two real number";
	cin>>f1>>f2;
	cout<<"The max of them is:"<<Max1(f1,f2)<<endl;
	cout<<"Please enter three real number";
	cin>>f1>>f2>>f3;
	cout<<"The max of them is:"<<Max1(f1,f2,f3)<<endl;
	
	return 0;
}