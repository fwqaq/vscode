#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
	// ����һ���������ƺ��룬����Զ��ŷָ,���������ѯ������(���֣��ܼ�),������������еĳ��ƺ�
	// 
	// 	���ƺ���������Ҫ��ֻҪȡ����λ, �磺AD123��12101�����ƺŲ�����ȫ����ĸ��
	// 
	// 		*���ڶ�β�Ž������ƣ�β��Ϊ1, 9����һ���У�β��Ϊ2, 8���ܶ����У�β��Ϊ3, 7���������� β��Ϊ4, 6����������, β��Ϊ5, 0����������, �������ղ����С�
	// 
	// 		*β�Ų�Ϊ���֣��򿴵�4λ�Ƿ������֣������4λ������ ���֣���������3λ���Դ���ȥ��ֱ���ҵ������ֵ�ʱ��ֹ.
	// 
	// 		*�����û�����Ϥϵͳ���п�����������ƣ��糵�Ʋ���5λ�����5λ������ȫ����ĸ��û�ö��ŷָ�ȣ��������������� һ�ɷ���error
	// 
	// 		*������û�������򷵻����еĳ��ƺ�, ��û�У��շ���none
	string car_num;
	cin >> car_num;
	int week = 0;
	cin >> week;
	vector<string>v;
	string a = "abcd";
	vector<string>v1;
	int flag = 1;//��ʱ��û�д���
	for (int i = 5; i < car_num.length(); i += 6){
		if (car_num[i] != ','){
			flag = 0;
			break;
		}
	}
	if (flag){
		int i = 0;
		while (i<car_num.length()){
			v.push_back(car_num.substr(i, 5));
			i += 6;
		}
		//�ж�ÿһ������ʱ�����
		for (vector<string>::iterator it = v.begin(); it != v.end(); it++){
			string s = *it;
			int a = -1;
			for (int i = s.length()-1; i >= 0; i--){
				if (s[i] >= '0'&&s[i] <= '9'){
					a = s[i] - '0';
					break;
				}
			}
			if (a == -1){
				flag = 0;
				break;
			}
			if ((a == week)||(a == 10 - week)){
				v1.push_back(s);
			}
		}
	}
	if (flag == 0){
		cout << "error " << endl;
	}
	else if (v1.empty()){
		cout << "none" << endl;
	}
	else{
		for (vector<string>::iterator it = v1.begin(); it != v1.end(); it++){
			cout << *it << " ";
		}
		cout << endl;
	}
	system("pause");
	return EXIT_SUCCESS;
}