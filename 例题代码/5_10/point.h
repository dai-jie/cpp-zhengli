class Point{
	int x,y;
	static int count;
public:
	Point(int xx=0,int yy=0):x(xx),y(yy){ count++;}
	~Point(){
		count --;
	}
	Point(const Point &p);
	int getX(){return x;}
	int getY(){return y;}
	static void showCount();
};
