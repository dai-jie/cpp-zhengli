#include<iostream>
using namespace std;

class R{
	int r1,r2;
public:
	R(int r1,int r2):r1(r1),r2(r2){ }
	void print(){
		cout<<"r1="<<r1<<":r2="<<r2<<endl;
	}
	void print() const;
};
void R::print() const{
	cout<<"r1="<<r1<<";r2="<<r2<<endl;
}
int main(){
	R a(5,4);
	a.print();
	const R b(20,52);
	b.print();
	return 0;
}