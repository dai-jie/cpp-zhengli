#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	float (*cp)[10][10]=new float[10][10][10];
	for(int i=0;i<10;i++)
		for(int j=0;j<10;j++)
			for(int k=0;k<10;k++)
				*(*(*(cp+i)+j)+k)=static_cast<float>(i*100+j*10+k);
	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++){
			for(int k=0;k<10;k++)
				cout<<setw(3)<<cp[i][j][k]<<" ";
			cout<<endl;
		}
		cout<<endl;
	}
	delete[] cp;
	return 0;
}