#include<iostream>
using namespace std;

class Tree {
private:
	int ages;
public:
	Tree(int a) :ages(a) {

	}
	~Tree() {
		age();
	}
	void grow(int years) {
		ages += years;
	}
	void age() {
		cout << "The age is: " << ages << endl;
	}
};
int main() {
	Tree t(12);

	t.age();
	t.grow(4);

	return 0;
}