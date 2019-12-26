#include<iostream>
using namespace std;

bool symn(int n){
	int i=n;
	int m=0;
	while(i>0){
		m=m*10+i%10;
		i/=10;
	}
	return m==n;
}

int main(){
	for(int i=11;i<=999;i++){
		if(symn(i)&&symn(i*i)&&symn(i*i*i)){
			cout<<"m="<<i;
			cout<<" m*m="<<i*i;
			cout<<" m*m*m="<<i*i*i<<endl;
		}
	}
	return 0;
}