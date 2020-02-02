#include<iostream>
using namespace std;

class DateType {
private:
	enum {
		character,
		integer,
		floating_point
	} vartype;
	union {
		char c;
		int i;
		float f;
	};
public:
	DateType(char ch) {
		vartype = character;
		c = ch;
	}
	DateType(int ii) {
		vartype = integer;
		i = ii;
	}
	DateType(float ff) {
		vartype = floating_point;
		f = ff;
	}
	void print();
};

void DateType::print() {
	switch (vartype)
	{
	case character:
		cout << "�ַ���:" << c << endl;
		break;
	case integer:
		cout << "���Σ�" << i << endl;
		break;
	case floating_point:
		cout << "�����ͣ�" << f << endl;
		break;
	default:
		break;
	}
}

int main() {
	DateType a('c'), b(12), c(1.44F);
	a.print();
	b.print();
	c.print();
	return 0;

}