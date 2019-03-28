#include<iostream>
#include<string>
using namespace std;
int main()
{
	string A, B;
	cin >> A;
	cin >> B;
	int lenA = A.size();
	int lenB = B.size();
	int maxLen = 0;
	for (int i = 0; i <= lenB - lenA; i++)
	{
		int curLen = 0;
		for (int j = 0; j<lenA; j++)
		{
			if (A[j] == B[i + j])
				curLen++;
		}
		if (curLen > maxLen)
			maxLen = curLen;
	}
	cout << lenA - maxLen << endl;
	return 0;
}