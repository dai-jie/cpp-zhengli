#include<iostream>
using namespace std;

int main(){
	void *pv;
	int i=5;
	pv=&i;
	cout<<&i<<"\t"<<*static_cast<int *>(pv);
	return 0;
}