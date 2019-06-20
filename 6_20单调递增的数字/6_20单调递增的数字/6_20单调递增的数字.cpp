#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
	int monotoneIncreasingDigits(int N) {
		string s;
		s = to_string(N);
		int len = s.size();
		int flag = len;
		for (int i = len - 1; i >= 1; i--){
			if (s[i] < s[i - 1]){
				flag = i;
				s[i - 1]--;
			}
		}
		for (int i = flag; i < len; i++){
			s[i] = '9';
		}
		int num = atoi(s.c_str());
		return num;
	}
};
int main(){
	Solution s;
	cout << s.monotoneIncreasingDigits(10) << endl;
	cout << s.monotoneIncreasingDigits(1000) << endl;
	cout << s.monotoneIncreasingDigits(1234) << endl;


	system("pause");
	return EXIT_SUCCESS;
}