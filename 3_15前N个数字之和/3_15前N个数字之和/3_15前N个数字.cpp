#include <iostream>
using namespace std;

 int sum2(int n)  {
	n && (n += sum2(n - 1));
	return n;
}
//��ʵ��for if �ͳ˳������ǰn��ĺ�
 int main(){
	 int n = 0;
	 cin >> n;
	 cout << sum2(n) << endl;
	system("pause");
	return EXIT_SUCCESS;
}