#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
	string LeftRotateString(string str, int n) {
		if (str.size() == 0){
			return "";
		}
		n = n%str.size();
		string str1 = str.substr(n, -1);
		string str2 = str.substr(0, n);
		return str1 + str2;
	}
};
int main(){
	Solution s;
	cout << s.LeftRotateString("abcXYZabc", 12);

	system("pause");
	return EXIT_SUCCESS;
}