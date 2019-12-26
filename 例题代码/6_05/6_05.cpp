#include<iostream>
using namespace std;

int main(){
	int i;
	int *ptr=&i;
	i=10;
	cout<<"i="<<i<<endl;
	cout<<"*ptr="<<*ptr<<endl;
	cout<<"&i="<<&i<<"  ptr="<<ptr<<endl;
	cout<<&ptr;
	return 0;
}