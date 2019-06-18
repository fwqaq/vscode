#include <iostream>
#define PIE 3.1415

using namespace std;

//Բ���ӿ���
class Circle{
protected:
	double radius;
public:
	//�����
	virtual double area(void) = 0;
	//���
	virtual double volume(void) = 0;
};

//��
class Sphere :public Circle{
public:
	Sphere(double r = 0) { radius = r; }
	//�����
	virtual double area(void){
		return 4.0 * PIE * radius * radius;
	}
	//���
	virtual double volume(void){
		return (4.0 / 3.0) * PIE * radius * radius * radius;
	}
};

//Բ��
class Column :public Circle
{
private:
	double height;
public:
	Column(double r = 0, double h = 0) {
		radius = r; 
		height = h;
	}
	//�����
	virtual double area(void){
		if (0 == height){
			//�����
			return PIE * radius * radius;
		}
		return 2.0* PIE * radius * radius + PIE * 2.0 * radius * height;
	}
	//���
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
		cout << "����������İ뾶��";
		cin >> rS;
		if (rS <= 0){
			cout << "���������0�����ݣ�\n\n";
		}
		else
			break;
	}

	while (true){
		cout << "������Բ����İ뾶��";
		cin >> rC;
		if (rC <= 0){
			cout << "���������0�����ݣ�\n\n";
		}
		else
			break;
	}

	while (true){
		cout << "������Բ����ĸߣ�";
		cin >> h;
		if (h <= 0){
			cout << "���������0�����ݣ�\n\n";
		}
		else
			break;
	}

	Sphere sphere(rS);
	Column column(rC, h);
	cout << "����İ뾶Ϊ��" << rS << endl
		<< "����ı����Ϊ��" << sphere.area() << endl
		<< "��������Ϊ��" << sphere.volume() << endl << endl;
	cout << "Բ����İ뾶Ϊ��" << rC << endl
		<< "Բ����ı����Ϊ��" << column.area() << endl
		<< "Բ��������Ϊ��" << column.volume() << endl << endl;

	system("pause");

}