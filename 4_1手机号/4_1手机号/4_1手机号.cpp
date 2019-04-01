#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
	vector<string>v;
	vector<string>v1;
	int num;
	cin >> num;
	for (int i = 0; i < num; i++){
		string str;
		cin >> str;
		v.push_back(str);
	}
	for (int i = 0; i < v.size(); i++){
		string str = v[i];
		if (str.length() != 11){
			v1.push_back("-1");
		}
		else{
			string s = str.substr(0, 3);
			if (s == "133" || s == "153" || s == "180" || s == "189"||s=="181"){
				v1.push_back("China Telecom");
			}
			else if (s == "130" || s == "131" || s == "155" || s == "185" || s == "186"){
				v1.push_back("China Unicom");
			}
			else if (s == "135" || s == "136" || s == "150" || s == "182" || s == "188"){
				v1.push_back("China Mobile Communications");
			}
			else{
				v1.push_back("-1");
			}
		}
	}
	for (int i = 0; i < v1.size(); i++){
		cout << v1[i] << endl;
	}
	system("pause");
	return EXIT_SUCCESS;
}