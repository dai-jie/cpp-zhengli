#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int x,y;
	cout<<"Please enter two integers:";
	cin>>x>>y;
	cout<<"pow(x,y)="<<pow(static_cast<double>(x),y)<<endl;
	return 0;
}
