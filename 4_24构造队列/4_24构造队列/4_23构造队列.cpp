#include <iostream>
using namespace std;
int main(){
	int num = 0;
	cin >> num;
	for (int i = 0; i < num; i++){
		int count = 0;
		cin >> count;
		int* p = new int[count];
		for (int j = 0; j < count; j++){
			p[j] = -1;
		}
		int len = 0;
		int pos = 0;
		while (len < count){
			int x = 0;
			for (; pos < count; )
			{
				//中间隔一个-1，就可以进行赋值操作，知道最后一个-1直接赋值。
				if (p[pos] == -1){
					x++;
				}
				if (x == 2){
					break;
				}
				pos = (pos + 1) % count;
			}
			p[pos] = ++len;
		}
		for (int mm = 0; mm < count; mm++){
			cout << p[mm] << " ";
		}
		cout << endl;
	}
	system("pause");
	return EXIT_SUCCESS;
}