#include<iostream>
using namespace std;

int fib(int n){
	if(n==1||n==2){
		cout<<"return 1\n";
		return 1;
	}
	else{
		cout<<"Call fib("<<n-1<<")+fib("<<n-2<<")\n";
		return fib(n-1)+fib(n-2);
	}
}

int main(){
	int n;
	cout<<"Please input an integer:";
	cin>>n;
	cout<<fib(n)<<endl;
	return 0;
}