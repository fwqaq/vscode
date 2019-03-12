#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;
//函数适
class MyPrint:public binary_function<int,int,void>{
public:
	void operator()(int v1, int v2) const{
		cout << "v1=" << v1 << " v2=" << v2 << " v1+v2" << v1 + v2 << endl;
	}
};
void test(){
	vector<int> v;
	for (int i = 0; i < 10; i++){
		v.push_back(i);
	}
	cout << "请输入其实质" << endl;
	int x;
	cin >> x;
	for_each(v.begin(), v.end(), bind2nd(MyPrint(), x));

	//bind1st ： 将参数绑定为函数对象的第一个参数,这里就相当于v1
	//bind2nd ： 将参数绑定为函数对象的第二个参数 这里就相当于v2
	//bind1st bind2nd将二元函数对象转为一元函数对象
}

//取反适配器
class GreatThen5:public unary_function<int,void>{//第一步：继承unary_function
public:
	bool operator()(int v)const{//第二步：加上const
		return v > 5;
	}
};
void test02(){
	vector<int>v;
	for (int i = 0; i < 10; i++){
		v.push_back(i);
	}
	//此时我们打印出大于5的数
	vector<int>::iterator it = find_if(v.begin(), v.end(), not1(GreatThen5()));//第三步：not1关键字
	vector<int>::iterator it2 = find_if(v.begin(), v.end(), bind2nd(greater<int>(), 5));
	cout << *it << endl;;
	cout << *it2 << endl;
}
//指针适配器
void myPrint(int v1, int v2){
	cout << "v1=" << v1 << " v2" << v2 << endl;
}
void test03(){
	vector<int>v;
	for (int i = 0; i < 10; i++){
		v.push_back(i);
	}
	for_each(v.begin(), v.end(), bind1st(ptr_fun(myPrint), 5));
}
int main(){
	//test();not
	//system("pause");
	test03();
	system("pause");
	return EXIT_SUCCESS;
}