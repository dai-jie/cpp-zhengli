#include<iostream>
using namespace std;

enum Words{Bit32,Bit64};
enum Core{Single,Dual,Quad};
enum HyperThread{Support,NotSupport};

class CPU {
private:
	unsigned frequence :32;
	Core CoreType :3;
	Words WordLen :2;
	HyperThread mode:2 ;
public:
	CPU(unsigned frequence, Core type, Words length, HyperThread mode) :
		frequence(frequence), CoreType(type), WordLen(length), mode(mode) {

	}
	void show();
};

void CPU::show() {
	cout << "Frequence:" << frequence<<endl;
	cout << "Core: ";
	switch ((unsigned)CoreType) {
	case Single:cout << "Single-Core" << endl; break;
	case Dual:cout << "Dual-Core" << endl; break;
	case Quad:cout << "Quad-Core" << endl; break;
	}
	cout << endl;
	cout << "Words:	";
	switch ((unsigned)WordLen)
	{
	case Bit32:cout << "32-bits len" << endl; break;
	case Bit64:cout << "64-bits len" << endl; break;
	default:
		break;
	}
	cout << endl;
	cout << "HyperThread:		";
	switch ((unsigned)mode)
	{
	case Support:cout << "Support Hyper-Thread" << endl; break;
	case NotSupport:cout << "Not Support Hyper-Thread" << endl; break;
	default:
		break;
	}
	cout << endl;
}

int main() {
	CPU c(3000000000, Quad, Bit64, Support);
	cout << "Size of class CPU: " << sizeof(CPU) << endl;
	c.show();

	return 0;

}