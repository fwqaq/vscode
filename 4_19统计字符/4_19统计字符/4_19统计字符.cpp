#include <iostream>
#include <string>
using namespace std;
int main(){
	//ͳ�����ȳ������ε�Ӣ���ַ�
	string str;
	getline(cin, str);
	int* p = new int[str.size()];
	char ch = 0;
	for (int i = 0; i < str.size(); i++){
		p[i] = 0;
	}
	for (int i = 0; i < str.size(); i++){
		if ((str[i] >= 'a'&&str[i] <= 'z') || (str[i] >= 'A'&&str[i] <= 'Z')){
			int j = i - 1;
			while (j >= 0){
				if (str[j] == str[i]){
					break;
				}
				j--;
			}
			if (j == -1){
				p[i] = 1;//ǰ��û���ҵ�
			}
			else{
				p[i] = p[j] + 1;
				if (p[i] == 3){
					ch = str[i];
					break;
				}
			}
		}
	}
	cout << ch << endl;
	system("pause");
	return EXIT_SUCCESS;
}