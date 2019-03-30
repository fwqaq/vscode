#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int MaxLength(string s, int s2){
	int c[50][50] = { 0 };
	if (s2 >= s.size())   
		return 0;
	int size1 = s2, size2 = s.size() - s2; for (int i = 1; i <= size1; i++){
		for (int j = 1; j <= size2; j++){
			if (s[i - 1] == s[s2 + j - 1]){
				c[i][j] = c[i - 1][j - 1] + 1;
			}

			else{
				c[i][j] = max(c[i - 1][j], c[i][j - 1]);
			}
		}
	}
	return c[size1][size2];
}

int main(){
	string str;
	cin >> str;
	int max = 0;
	int size = str.size();
	for (int i = 0; i<size; i++){
		int tmp;
		tmp = MaxLength(str, i);
		if (tmp>max)
			max = tmp;
	}
	cout << 2 * max;
	system("pause");
	return EXIT_SUCCESS;

}