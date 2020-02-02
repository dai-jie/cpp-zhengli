#include<iostream>
using namespace std;

class Complex {
private:
	double real;
	double image;
public:
	Complex(double r, double i) :real(r), image(i) {

	}
	Complex(double r) :real(r),image(0) {

	}
	void add(Complex c) {
		this->image += c.image;
		this->real += c.real;
	}
	void show() {
		cout << real << "+";
		cout << image << "i";
		cout << endl;
	}
};

int main() {
	Complex  c1(3, 5);
	Complex c2 = 4.5;
	c1.add(c2);
	c1.show();

	return 0;
}