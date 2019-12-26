#include<iostream>
using namespace std;

int sumOfSquare(int a,int b){
	return a*a+b*b;
}

float sumOfSquare(float a,float b){
	return a*a+b*b;
}

int main(){
	int m,n;
	cout<<"Enter two integer:";
	cin>>m>>n;
	cout<<"Their sum of square: "<<sumOfSquare(m,n)<<endl;

	float x,y;
	cout<<"Enter real number:";
	cin>>x>>y;
	cout<<"Their sum of square: "<<sumOfSquare(x,y)<<endl;

	return 0;
}