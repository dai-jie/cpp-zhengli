#include<iostream>
using namespace std;

enum Weekday{SUN=0,MON,TUE,WEN,THU,FRI,SAT};
int main() {
	int i;
	Weekday d = THU;
	cout << "d=" << d << endl;
	i = d;
	cout << "i=" << i << endl;

	d = (Weekday) 6 ;
	cout << "d=" << d << endl;
	d = (Weekday)4;
	cout << "d=" << d << endl;
	return 0;
}