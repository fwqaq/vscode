#include <iostream>
using namespace std;
int main(){

	int n = 0;
	while (cin >> n){
		if (n < 0){
			cout << -n << endl;
			continue;
		}
		int a = 0;
		int b = 1;
		//�ҵ�һ�����ִ��ڴ�����ʱ�����ͣ
		while (b < n){
			b = a + b;
			a = b - a;
		}
		int min1 = (b - n)>(n - a) ? n - a : b - n;
		cout << min1 << endl;
	}
	return 0;
}