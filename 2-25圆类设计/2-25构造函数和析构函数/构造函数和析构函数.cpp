#include <iostream>
using namespace std;
//����
class Point{
public:
	//���캯��
	Point(){
		cout << "���캯��" << endl;
	}
	~Point(){
		cout << "��������" << endl;
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
//Բ��
class Circle{
public:
	//���ð뾶
	void setR(int R){
		m_R = R;
	}
	//��ȡ�뾶
	int getR(){
		return m_R;
	}
	//����Բ��
	void setCenter(Point p){
		m_Center = p;
	}
	//���Բ��
	Point getCenter(){
		return m_Center;
	}
private:
	int m_R;
	Point m_Center;
};
//����ȫ�ֱ����жϵ��Բ�ľ���
void isL(Circle c, Point p){
	//�㵽Բ�ĵľ����ƽ��
	int away = (c.getCenter().getX() - p.getX())*(c.getCenter().getX() - p.getX()) + (c.getCenter().getY() - p.getY())*(c.getCenter().getY() - p.getY());
	//�뾶ƽ���ľ���
	int distance = c.getR()*c.getR();
	if (away > distance){
		cout << "����Բ��" << endl;
	}
	else if (away < distance){
		cout << "����Բ��" << endl;
	}
	else{
		cout << "����Բ��" << endl;
	}
}
int main(){
	Point p;
	system("pause");
	return EXIT_SUCCESS;
}