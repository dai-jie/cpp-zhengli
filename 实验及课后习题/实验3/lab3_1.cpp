#include<iostream>
using namespace std;

float Convert(float TempFer){
	return (TempFer-32)*5/9;
}

int main(){
	float f;
	cout<<"Please enter a real number:";
	cin>>f;
	cout<<"The temper is "<<Convert(f)<<"C"<<endl;
	return 0;
}