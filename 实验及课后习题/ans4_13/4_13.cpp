#include<iostream>
using namespace std;

class Circle {
public:
	Circle(float r) :radius(r) {

	}
	~Circle() {

	}
	float getArea() {
		return 3.14F * radius * radius;
	}
private:
	float radius;
};

int main() {
	float radius;
	cout << "������Բ�İ뾶��";
	cin >> radius;
	Circle p(radius);
	cout << "�뾶Ϊ" << radius << "��Բ�����Ϊ" << p.getArea() << endl;

	return 0;
}