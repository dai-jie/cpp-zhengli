#include<iostream>
using namespace std;

void move(char src,char dest){
	cout<<src<<"-->"<<dest<<endl;
}

void hanoi(int n,char src,char medium,char dest){
	if(n==1)
		move(src,dest);
	else{
		hanoi(n-1,src,dest,medium);
		move(src,dest);
		hanoi(n-1,medium,src,dest);
	}
}

int main(){
	int n;
	cout<<"Enter the number of diskes:";
	cin>>n;
	cout<<"the steps to moving "<<n<<" diskes:"<<endl;
	hanoi(n,'A','B','C');
	return 0;
}