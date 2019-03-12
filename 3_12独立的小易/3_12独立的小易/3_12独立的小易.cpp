#include <iostream>
using namespace std;
int main(){
	/*
	小易为了向他的父母表现他已经长大独立了,他决定搬出去自己居住一段时间。一个人生活增加了许多花费: 小易每天必须吃一个水果并且需要每天支付x元的房屋租金。
	当前小易手中已经有f个水果和d元钱,小易也能去商店购买一些水果
	,商店每个水果售卖p元。小易为了表现他独立生活的能力,希望能独立生活的时间越长越好,小易希望你来帮他计算一下他最多能独立生活多少天。
	*/
	int x, f, d, p;
	cin >> x;//需要支付的房租  
	cin >> f;//已经有了f个水果   
	cin >> d;//剩余的钱数   3 5 100 10
	cin >> p;//每个水果的售价16 4 8 2   2 17 20 1
	int size = 0;
	//第一种情况支付的房租大于剩余的钱
	if (x > d){
		size = 0;
	}
	else if (x*f >= d){//此时钱的数量支撑不到水果吃完
		size = d/x;
	}
	else if (x*f < d){
		size = f + (d - f*x) / (x + p);
	}
	cout << size << endl;
	system("pause");
	return EXIT_SUCCESS;
}