#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
bool solve(string str1, string str2)
{
	if (str1.length() > str2.length())
		return false;
	int i, j;
	for (i = 0, j = 0; i < str1.length(), j < str2.length();)
	{
		if (str1[i] == '?')
		{
			i++;
			j++;
		}
		else if (str1[i] == '*')
		{
			if (i == str1.length() - 1)
				return true;
			else if (i < str1.length() - 1)
			{
				i++; j++;
			}
		}
		else if (str1[i] != str2[j])
			return false;
		else
		{
			i++; j++;
		}
	}
	return true;
}
int main()
{
	string str1, str2;
	while (cin >> str1 >> str2)
	{
		if (solve(str1, str2))
			cout << "true" << endl;
		else
			cout << "false" << endl;
	}
	return 0;
}