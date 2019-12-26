#include<iostream>
using namespace std;

unsigned fac(unsigned n){
	unsigned f;
	if(n==0)
		f=1;
	else
		f=n*fac(n-1);
	return f;
}

int main(){
	unsigned n;
	cout<<"Enter a positive integer:";
	cin>>n;
	unsigned y=fac(n);
	cout<<n<<"!="<<y<<endl;
	return 0;
}