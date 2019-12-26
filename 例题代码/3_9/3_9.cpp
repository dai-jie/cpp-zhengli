#include<iostream>
using namespace std;

unsigned comn(unsigned n,unsigned k){
	if(n==k||k==0)
		return 1;
	else
		return comn(n-1,k)+comn(n-1,k-1);
}

int main(){
	unsigned n,k;
	cout<<"Please enter two integers n and k:";
	cin>>n>>k;
	cout<<"C(n,k)="<<comn(n,k)<<endl;
	return 0;
}