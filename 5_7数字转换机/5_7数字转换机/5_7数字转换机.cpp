#include <iostream>
using namespace std;
int main(){
	//只能进行 +1 或者 *2两个操作
	int a = 0, b = 0, c = 0, d = 0;
	while (cin >> a >> b >> c >> d)
	{
		int num = 0;
		while (a < c)
		{
			num++;
			if (c / a == c / (a + 1))
			{
				a++;
				b++;
			}
			else
			{
				a *= 2;
				b *= 2;
			}
		}
		if (b == d)
			cout << num << endl;
		else
			cout << -1 << endl;
	}
	return 0;
	system("pause");
	return EXIT_SUCCESS;
}