#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
	int lengthOfLastWord(string s) {
		if (s.empty()){
			return 0;
		}
		int sum = 0;
		for (int i = s.size() - 1; i >= 0; i--){
			if (s[i] == ' '){
				break;
			}
			sum++;
		}
		return sum;
	}
};
int main(){
	Solution s;
	cout << s.lengthOfLastWord("asj aksdhk asdhk");

	system("pause");
	return EXIT_SUCCESS;
}