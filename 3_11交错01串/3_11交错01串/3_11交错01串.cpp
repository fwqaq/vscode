#include <iostream>
#include <string>
using namespace std;
/*
如果一个01串任意两个相邻位置的字符都是不一样的,我们就叫这个01串为交错01串。例如: "1","10101","0101010"都是交错01串。
小易现在有一个01串s,小易想找出一个最长的连续子串,并且这个子串是一个交错01串。小易需要你帮帮忙求出最长的这样的子串的长度是多少。
*/
int main(){
	string str1;
	cin >> str1;
	int max = 0;
	int num = 0;
	for (int i = 0; i < (int)str1.length(); i++){
		if (str1[i + 1] == '\0'){
			break;
		}
		if (str1.at(i) != str1.at(i + 1)){
			num++;
		}
		else{
			if (num>max){
				max = num;
			}
			num = 0;
		}
	}
	if (num > max){
		max = num;
	}
	cout << max+1 << endl;
	system("pause");
	return EXIT_SUCCESS;
}