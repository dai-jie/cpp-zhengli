#include<iostream>
using namespace std;
int main(){
	int Line1[]={1,0,0};
	int Line2[]={0,1,0};
	int Line3[]={0,0,1};
	int *pLine[3]={Line1,Line2,Line3};
	cout<<"Matrix test:"<<endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++)
			cout<<*(pLine[i]+j)<<' ';
		cout<<endl;
	}
}