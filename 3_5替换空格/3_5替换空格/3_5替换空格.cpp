#include <iostream>
using namespace std;
void RepalceBlank(char* str, int len){
	if (str == NULL&&len <= 0){
		return;  //ԭʼ�ַ���Ϊ�� ����С��0ʱ��ֱ��return
	}
	int ori_Len = 0;//ԭʼ���ַ�������
	int num_B = 0;//�ո������
	int i = 0;
	while (str[i] != '\0'){
		ori_Len++;
		if (str[i] == ' '){
			++num_B;
		}
		i++;
	}
	int newLen = ori_Len + num_B * 2;//�������Ӧ��ȥX2 ÿһ���ո�ͻ�������
	if (newLen > len){ //��ʱ�Ǽ����д�������ĳ��ȣ���������
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
	//��Ŀ������ʵ��һ�����������ַ����е�ÿ���ո��滻��%20.��������We are happy�����We%20are%20happy.
	char str[1000] = "ab cd e";
	RepalceBlank(str, 1000);
	system("pause");
	return EXIT_SUCCESS;
}