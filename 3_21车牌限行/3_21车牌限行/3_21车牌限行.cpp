#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
	// 输入一个或多个车牌号码，多个以逗号分割开,再输入想查询的日期(数字，周几),输出该日期限行的车牌号
	// 
	// 	车牌号码有以下要求，只要取后五位, 如：AD123，12101，车牌号不可能全是字母。
	// 
	// 		*现在对尾号进行限制：尾号为1, 9则周一限行，尾号为2, 8则周二限行，尾号为3, 7则周三限行 尾号为4, 6则周四限行, 尾号为5, 0的周五限行, 周六周日不限行。
	// 
	// 		*尾号不为数字，则看第4位是否是数字，如果第4位还不是 数字，继续看第3位，以此下去，直到找到有数字的时候止.
	// 
	// 		*由于用户不熟悉系统，有可能输入错误车牌，如车牌不满5位或大于5位、车牌全是字母、没用逗号分割等，如有输入错误情况 一律返回error
	// 
	// 		*如输入没有问题则返回限行的车牌号, 如没有，刚返回none
	string car_num;
	cin >> car_num;
	int week = 0;
	cin >> week;
	vector<string>v;
	string a = "abcd";
	vector<string>v1;
	int flag = 1;//此时是没有错误
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
		//判断每一个车牌时候符合
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