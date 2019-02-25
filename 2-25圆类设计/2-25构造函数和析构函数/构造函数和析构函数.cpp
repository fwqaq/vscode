#include <iostream>
using namespace std;
//点类
class Point{
public:
	//构造函数
	Point(){
		cout << "构造函数" << endl;
	}
	~Point(){
		cout << "析构函数" << endl;
	}
	void setX(int x){
		m_X = x;
	}
	void setY(int y){
		m_Y = y;
	}
	int getX(){
		return m_X;
	}
	int getY(){
		return m_Y;
	}
private:
	int m_X;
	int m_Y;
};
//圆类
class Circle{
public:
	//设置半径
	void setR(int R){
		m_R = R;
	}
	//获取半径
	int getR(){
		return m_R;
	}
	//设置圆心
	void setCenter(Point p){
		m_Center = p;
	}
	//获得圆心
	Point getCenter(){
		return m_Center;
	}
private:
	int m_R;
	Point m_Center;
};
//利用全局变量判断点和圆的距离
void isL(Circle c, Point p){
	//点到圆心的距离的平方
	int away = (c.getCenter().getX() - p.getX())*(c.getCenter().getX() - p.getX()) + (c.getCenter().getY() - p.getY())*(c.getCenter().getY() - p.getY());
	//半径平方的距离
	int distance = c.getR()*c.getR();
	if (away > distance){
		cout << "点在圆外" << endl;
	}
	else if (away < distance){
		cout << "点在圆内" << endl;
	}
	else{
		cout << "点在圆上" << endl;
	}
}
int main(){
	Point p;
	system("pause");
	return EXIT_SUCCESS;
}