#include <iostream>
#include <cmath>
using namespace std;
bool is_Sushu(int x){
	for (int i = 2; i <= sqrt(x); i++){
		if (x % i == 0){
			return false;
		}
	}
	return true;
}
int main(){
	int n = 0;
	while (cin >> n){
		//����һ��ż�����ҵ�����������ӵ��������Ҳ�ֵ����С��
		int a = n / 2;
		int b = n / 2;
		if (is_Sushu(a) && is_Sushu(b)){
			cout << a << endl;
			cout << b << endl;
			continue;
		}
		a = a - 1;
		b = b + 1;
		while (!(is_Sushu(a) && is_Sushu(b))){
			if (is_Sushu(a) && is_Sushu(b)){
				break;
			}
			a--;
			b++;
		}
		cout << a << endl;
		cout << b << endl;
	}

	return 0;
}