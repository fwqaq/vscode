#include <iostream>
using namespace std;
int main(){
	int p[1024];
	for (int i = 0; i < 1024; i++){
		p[i] = -1;
	}
	p[0] = 2;
	int num = 0;
	cin >> num;
	int flag = 0;
	for (int i = 1; i < num; i++){
		flag = 0;
		int j = 0;
		for (; p[j] != -1; j++){
			int sul = p[j] * 2;
			p[j] = (sul + flag) % 10;
			flag = (sul) / 10;
		}
		if (flag != 0){
			p[j] = flag;
		}
	}
	int number = 0;
	for (int i = 0; p[i] != -1; i++){
		number++;
	}
	for (int i = number - 1 ; i >= 0; i--){
		cout << p[i];
	}
	system("pause");
	return EXIT_SUCCESS;
}