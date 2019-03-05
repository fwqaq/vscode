#include <iostream>
using namespace std;
void RepalceBlank(char* str, int len){
	if (str == NULL&&len <= 0){
		return;  //原始字符串为空 长度小于0时就直接return
	}
	int ori_Len = 0;//原始的字符串长度
	int num_B = 0;//空格的数量
	int i = 0;
	while (str[i] != '\0'){
		ori_Len++;
		if (str[i] == ' '){
			++num_B;
		}
		i++;
	}
	int newLen = ori_Len + num_B * 2;//这里就是应该去X2 每一个空格就会多出两个
	if (newLen > len){ //此时是假设有传入数组的长度，超出长度
		return;
	}
	int indexofOriginal = ori_Len;
	int indexofNew = newLen;
	while (indexofOriginal >= 0 && indexofNew > indexofOriginal){
		if (str[indexofOriginal] == ' '){
			str[indexofNew--] = '0';
			str[indexofNew--] = '2';
			str[indexofNew--] = '%';
		}
		else{
			str[indexofNew--] = str[indexofOriginal];
		}
		--indexofOriginal;
	}
	cout << str << endl;
}
int main(){
	//题目描述：实现一个函数，把字符串中的每个空格替换成%20.例如输入We are happy。输出We%20are%20happy.
	char str[1000] = "ab cd e";
	RepalceBlank(str, 1000);
	system("pause");
	return EXIT_SUCCESS;
}