#include <iostream>
#define PIE 3.1415

using namespace std;

//圆，接口类
class Circle{
protected:
	double radius;
public:
	//表面积
	virtual double area(void) = 0;
	//体积
	virtual double volume(void) = 0;
};

//球
class Sphere :public Circle{
public:
	Sphere(double r = 0) { radius = r; }
	//表面积
	virtual double area(void){
		return 4.0 * PIE * radius * radius;
	}
	//体积
	virtual double volume(void){
		return (4.0 / 3.0) * PIE * radius * radius * radius;
	}
};

//圆柱
class Column :public Circle
{
private:
	double height;
public:
	Column(double r = 0, double h = 0) {
		radius = r; 
		height = h;
	}
	//表面积
	virtual double area(void){
		if (0 == height){
			//底面积
			return PIE * radius * radius;
		}
		return 2.0* PIE * radius * radius + PIE * 2.0 * radius * height;
	}
	//体积
	virtual double volume(void){
		if (0 == height){
			return 0;
		}
		return PIE * radius * radius * height;
	}
};


int main(void){
	double rS, rC, h;
	while (true){
		cout << "请输入球体的半径：";
		cin >> rS;
		if (rS <= 0){
			cout << "请输入大于0的数据！\n\n";
		}
		else
			break;
	}

	while (true){
		cout << "请输入圆柱体的半径：";
		cin >> rC;
		if (rC <= 0){
			cout << "请输入大于0的数据！\n\n";
		}
		else
			break;
	}

	while (true){
		cout << "请输入圆柱体的高：";
		cin >> h;
		if (h <= 0){
			cout << "请输入大于0的数据！\n\n";
		}
		else
			break;
	}

	Sphere sphere(rS);
	Column column(rC, h);
	cout << "球体的半径为：" << rS << endl
		<< "球体的表面积为：" << sphere.area() << endl
		<< "球体的体积为：" << sphere.volume() << endl << endl;
	cout << "圆柱体的半径为：" << rC << endl
		<< "圆柱体的表面积为：" << column.area() << endl
		<< "圆柱体的体积为：" << column.volume() << endl << endl;

	system("pause");

}