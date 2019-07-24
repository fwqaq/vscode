#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main(){

	string str1;
	string str2;
	int len1;
	int len2;
	while (cin >> str1 >> str2 >> len1 >> len2){
		int ret = 0;
		for (int i = len2; i >= len1; i--){
			for (int j = 0; j < i; j++){
				if (j>str1.size() - 1 && j <= str2.size() - 1){
					ret += (str2[j] - 'a')*pow(26, i - j - 1);
				}
				else if (j > str2.size() - 1 && j <= str1.size() - 1){
					ret -= (str1[j] - 'a')*pow(26, i - j - 1);
				}
				else if (j <= str2.size() - 1 && j <= str1.size() - 1){
					ret += (str2[j] - str1[j])*pow(26, i - j - 1);
				}
			}
		}
		ret = (ret - 1) % 1000007;
		cout << ret << endl;
	}
	system("pause");
	return EXIT_SUCCESS;
}