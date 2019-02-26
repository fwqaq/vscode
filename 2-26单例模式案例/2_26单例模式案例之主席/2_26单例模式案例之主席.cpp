#include <iostream>
using namespace std;
//创建一个主席类
//需求 单例模式 为了创建类中的对象 并且保证只有一个对象实例
class ChairMan{
private:
	ChairMan(){
		cout << "创建国家主席" << endl;//在编译的时候就进行执行
	}
	ChairMan(const ChairMan& p){//此时我们私有拷贝构造

	}
private:
	static ChairMan* singleMan;
public:
	//提供 get方法 访问主席
	static ChairMan* getSingleMan(){
		return singleMan;
	}
};
ChairMan* ChairMan::singleMan = new ChairMan;
void test(){
	//直接实例化进行创建 拷贝构造进行创建 等方法都不能进行创建新的对象
	ChairMan* cm = ChairMan::getSingleMan();
	ChairMan* cm1 = ChairMan::getSingleMan();
	if (cm == cm1){
		cout << "相同" << endl;
	}
}
int main(){
	cout << "main函数执行" << endl;
	test();
	system("pause");
	return EXIT_SUCCESS;
}