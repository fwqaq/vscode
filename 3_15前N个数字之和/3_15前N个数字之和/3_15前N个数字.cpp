#include <iostream>
using namespace std;

 int sum2(int n)  {
	n && (n += sum2(n - 1));
	return n;
}
//不实用for if 和乘除计算出前n项的和
 int main(){
	 int n = 0;
	 cin >> n;
	 cout << sum2(n) << endl;
	system("pause");
	return EXIT_SUCCESS;
}