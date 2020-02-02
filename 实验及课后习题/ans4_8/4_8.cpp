#include<iostream>
using namespace std;

class Dog {
private:
	int age;
	int weight;
public:
	void cage(int a) { age = a; }
	void cweight(int a) { weight = a; }
	void getage() const { std::cout<<"The dog's age is: "<<age<<endl ; }
	void getweight() const { std::cout << "The dog's weight is: " << weight << endl; }
	Dog(int a, int b) :age(a), weight(b) {
		cout << "create a concrete dog"<<endl;
	}
	Dog() { cout << "create an abstract dog" << endl; };
	~Dog() { cout << "delete a dog"<<endl; }
};

int main() {
	Dog hashiqi;
	hashiqi.cage(5);
	hashiqi.cweight(30);
	hashiqi.getage();
	Dog taidi(5,20);
	taidi.getweight();

	return 0;
}