#include<iostream>
using namespace std;
#include<iostream>
using namespace std;

class A{
	const int a;
	static const int b;
public:
	A(int i):a(i){}
	void print();
};

const int A::b=10;

void A::print(){
	cout<<a<<":"<<b<<endl;
}
int main(){
	A a1(100),a2(0);
	a1.print();
	a2.print();
	return 0;
}