/*����int32����m��n�Ķ����Ʊ������ж��ٸ�λ(bit)��ͬ��*/
#include<iostream>
using namespace std;
int main(){
	int m, n;
	cin >> m >> n;
	int sum = 0;
	while (m>0 || n>0){
		if ((m & 1) != (n & 1)){
			sum++;
		}
		m = m >> 1;
		n = n >> 1;
	}
	cout << sum << endl;
	system("pause");
	return EXIT_SUCCESS;
}