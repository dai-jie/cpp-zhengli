#include<iostream>
using namespace std;

void swap(int &a,int &b){
	int t=a;
	a=b;
	b=t;
}

int main(){
	int x=5,y=10;
	swap(x,y);
	cout<<"x="<<x<<" y="<<y<<endl;
	return 0;
}