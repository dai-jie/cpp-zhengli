#include<iostream>
using namespace std;
int i=1;

void other(){
	static int a=2;
	static int b;
	int c=10;
	a+=2;
	i+=32;
	c+=5;
	cout<<"---OTHER---"<<endl;
	cout<<"i:"<<i<<"a:"<<a<<"b:"<<b<<"c:"<<c<<endl;
	b=a;
}
int main(){
	static int a;
	int b=-10;
	int c=0;

	cout<<"---MAIN---"<<endl;
	cout<<"i:"<<i<<"a:"<<a<<"b:"<<b<<"c:"<<c<<endl;
	c+=8;
	other();
	cout<<"---MAIN---"<<endl;
	cout<<"i:"<<i<<"a:"<<a<<"b:"<<b<<"c:"<<c<<endl;
	i+=10;
	other();
	return 0;
}