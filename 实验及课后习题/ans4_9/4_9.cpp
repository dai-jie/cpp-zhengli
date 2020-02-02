#include<iostream>
using namespace std;

class Rectangle {
private:
	int top, left, bottom, right;

public:
	Rectangle(int top, int left, int bottom, int right);
	~Rectangle() {

	}
	int getTop() const {
		return top;
	}
	int getLeft() const {
		return left;
	}
	int getBottom() const {
		return bottom;
	}
	int getRight() const {
		return right;
	}
	void setTop(int top) {
		this->top = top;
	}
	void setLeft(int left) {
		this->left = left;
	}
	void setRight(int right) {
		this->right = right;
	}
	void setBottom(int bottom) {
		this->bottom = bottom;
	}
	int getArea() const;
};

int Rectangle::getArea() const {
	return (right - left) * (top - bottom);
}

Rectangle::Rectangle(int top, int left, int bottom, int right) :top(top), left(left), bottom(bottom) ,right(right){

}

int main() {
	Rectangle rect(100, 20, 50, 80);
	cout << "Aera:" << rect.getArea() << endl;
}