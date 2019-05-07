#include <iostream>
#include <string>
using namespace std;
int main(){
	int L = 0, R = 0, W = 0;//5 3 4
	//如果发生死锁的话就是剩余的数量小于4（写的数量） 有数据的数量小于3（读的数量）
	cin >> L >> R >> W;
	string str = "OK";
	for (int i = 0; i <= L; i++){
	//i就是现在内存所有的数据
		if (i < R&&L - i < W){
			str = "DEADLOCK";
		}
	}
	cout << str << endl;

	system("pause");
	return EXIT_SUCCESS;
}