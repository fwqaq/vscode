#include <iostream>
using namespace std;
int main(){
	int n1 = 0;
	int n2 = 0;
	cin >> n1 >> n2;
	//˳ʱ��+  ��ʱ��-   ��ͬ��ʱ��ʹ��˳ʱ��
	int s_num = (n2 - n1 + 360) % 360;
	int n_num = (n1 - n2 + 360) % 360;
	if (s_num <= n_num){
		cout << s_num << endl;
	}
	else{
		cout << "-" << n_num << endl;
	}

	system("pause");
	return EXIT_SUCCESS;
}