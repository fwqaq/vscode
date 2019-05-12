#include <iostream>
#include <string>
#include <algorithm>
#include <functional>
using namespace std;
class Solution {
public:
	string longestPalindrome(string s) {
		//��ÿ���ַ��������ҳ���Ļ����Ӵ�,ÿ�ֻ��Ķ�������Ѱ�ҵķ�ʽ
		string str = "";
		for (int i = 0; i < s.length(); i++){
			//��һ�ֻ��ķ�ʽ
			int num = 1;
			for (int z = 1;; z++){
				if ((i - z) >= 0 && (i + z) < s.length() && (s[i - z] == s[i + z])){
					num += 2;
				}
				else{
					break;
				}
			}
			if (num>str.length()){
				str = s.substr(i - num / 2, num);
			}
			//�ڶ��ֻ��ķ�ʽ
			num = 0;
			for (int z = 0;; z++){
				if ((i - z) >= 0 && (i + z + 1) < s.length() && s[i - z] == s[i + z + 1]){
					num += 2;
				}
				else{
					break;
				}
			}
			if (num>str.length()){
				str = s.substr(i - num / 2 + 1, num);
			}
		}
		return str;
	}
};
int main(){
	Solution s;
	cout << s.longestPalindrome("babad") << endl;
	system("pause");
	return EXIT_SUCCESS;
}