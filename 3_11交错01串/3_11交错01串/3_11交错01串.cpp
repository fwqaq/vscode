#include <iostream>
#include <string>
using namespace std;
/*
���һ��01��������������λ�õ��ַ����ǲ�һ����,���Ǿͽ����01��Ϊ����01��������: "1","10101","0101010"���ǽ���01����
С��������һ��01��s,С�����ҳ�һ����������Ӵ�,��������Ӵ���һ������01����С����Ҫ����æ�������������Ӵ��ĳ����Ƕ��١�
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