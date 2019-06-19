#include <iostream>
using namespace std;
class Solution {
public:
	bool isPalindrome(string s) {
		int start = 0;
		int end = s.size() - 1;
		while (start < end){
			if (s[start] != s[end]){
				return false;
			}
			start++;
			end--;
		}
		return true;
	}
};
int main(){

	Solution s;
	cout << s.isPalindrome("abccba") << endl;
	cout << s.isPalindrome("analsd") << endl;
	system("pause");
	return EXIT_SUCCESS;
}