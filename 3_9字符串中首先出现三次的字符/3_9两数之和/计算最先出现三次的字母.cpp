#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	getline(cin, str);
	char c[256] = { 0 };
	for (unsigned int i = 0; i < str.length(); i++)
	{
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
		{
			c[str[i]]++; 
			if (c[str[i]] == 3)
			{
				cout << str[i] << endl;
				break;
			}
		}
	}
	system("pause");
	return 0;

}
