#include <iostream>
using namespace std;
class Solution {
public:
	int lengthOfLongestSubstring(string s) {
		if (s.empty()){
			return 0;
		}
		if (s.length() == 1){
			return 1;
		}
		//计算两次循环,定义两个指针从前往后
		int i = 0;
		int j = 1;
		int max1 = 0;
		while (j < s.length()){
			if (s[i] == s[j]){
				i++;
				j++;
				continue;       
			}                                      //abcabcbb
		//遍历i到j空间是否含有重复字符
			for (int z = i; z < j; z++){
				if (s[z] == s[j]){
					i = z + 1;
					break;
				}
			}
			//计算我们的j-i的值
			int len = j - i;
			if (len>max1){
				max1 = len;
			}
			j++;
		}
		return max1 + 1;
	}
};
int main(){
	Solution s;
	cout << s.lengthOfLongestSubstring("abcabcbb") << endl;
	cout << s.lengthOfLongestSubstring("aaaaaaaaaaaaaaaa") << endl;;
	cout << s.lengthOfLongestSubstring("pwwkew");
	cout << s.lengthOfLongestSubstring("aab");
	system("pause");
	return EXIT_SUCCESS;
}