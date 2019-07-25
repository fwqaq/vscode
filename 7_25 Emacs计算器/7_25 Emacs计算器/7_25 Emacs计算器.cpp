// write your code here cpp
#include <iostream>
#include <string>
#include <stack>
using namespace std;
int main(){
	int num = 0;
	while (cin >> num){
		stack<int>s;
		for (int i = 0; i < num; i++){
			string str;
			cin >> str;
			if (str != "+"&&str != "-"&&str != "/"&&str!= "*"){
				s.push(atoi(str.c_str()));
			}
			else{
				if (str == "+"){
					int num1 = s.top(); s.pop();
					int num2 = s.top(); s.pop();
					s.push(num1 + num2);
				}
				else if (str == "/"){
					int num1 = s.top(); s.pop();
					int num2 = s.top(); s.pop();
					s.push(num1 / num2);
				}
				else if (str == "-"){
					int num1 = s.top(); s.pop();
					int num2 = s.top(); s.pop();
					s.push(num1 - num2);
				}
				else {
					int num1 = s.top(); s.pop();
					int num2 = s.top(); s.pop();
					s.push(num1 * num2);
				}
			}
		}
		cout << s.top() << endl;
		s.pop();
	}

	system("pause");
	return EXIT_SUCCESS;
}