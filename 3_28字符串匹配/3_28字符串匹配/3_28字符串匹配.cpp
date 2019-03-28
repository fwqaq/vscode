#include <iostream>
#include <set>
#include <string>
using namespace std;
int main(){
	//输入两个字符串
	//输入包括两行, 第一行一个字符串A, 字符串A长度length(1 ≤ length ≤ 50), A中每个字符都是'0'或者'1'。
	//	第二行一个字符串B, 字符串B长度length(1 ≤ length ≤ 50), B中的字符包括'0', '1'和'?'。
	string A;
	string B;
	cin >> A;
	cin >> B;
	set<string>se;
	int A_len = A.length();
	int B_len = B.length();
	for (int i = 0; i < A_len - B_len + 1; i++){
		int flag = 1;
		for (int j = 0; j < B_len; j++){
			if (!(B[j] == A[i + j] || B[j] == '?')){
				flag = 0;
				break;
			}
		}
		if (flag){
			string s = A.substr(i, B_len);
			se.insert(s);
		}
	}
	cout << se.size() << endl;
	system("pause");
	return EXIT_SUCCESS;
}