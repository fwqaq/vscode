#include <iostream>
#include <string>
#include <vector>
using namespace  std;
/*
1. ����ֻ���ɴ�д��ĸ��Сд��ĸ�����ֹ��ɣ�

2. ���벻�������ֿ�ͷ��

3. ���������ٳ��ִ�д��ĸ��Сд��ĸ�������������ַ������е����֣�

4. ���볤������Ϊ8

����С���ܵ���n�����룬��������д�����ж���Щ��������Щ�Ǻ��ʵģ���Щ�ǲ��Ϸ��ġ�
*/
bool is_NUMU(string& str){
	for (int i = 0; i < str.length(); i++){
		if ((str[i] >= 'a'&&str[i] <= 'z') || (str[i] >= 'A'&&str[i] <= 'Z') || (str[i] >= '0'&&str[i] <= '9')){
			continue;
		}
		else{
			return false;
		}
	}
	return true;
}
bool is_BeginNum(string& str){

	return !(str[0] >= '0'&&str[0] <= '9');
}
bool is_Leng(string& str){
	return str.length() >= 8;
}
bool is_NumGreaterTwo(string& str){
	int Da = 0;
	int Xiao = 0;
	int Zimu = 0;
	for (int i = 0; i < str.length(); i++){
		if (str[i] >= 'a'&&str[i] <= 'z'){
			Xiao = 1;

		}
		if (str[i] >= 'A'&&str[i] <= 'Z') {
			Da = 1;
		
		}
		if (str[i] >= '0'&&str[i] <= '9'){
			Zimu = 1;
		
		}
	}
	if (Xiao + Da + Zimu >= 2){
		return true;
	}
	return false;
}
int main(){
	int num = 0;
	cin >> num;
	vector<string>v;
	vector<string>v2;
	for (int i = 0; i < num; i++){
		string str;
		cin >> str;
		v.push_back(str);
	}

	for (vector<string>::iterator it = v.begin(); it != v.end(); it++){
		if (is_NumGreaterTwo(*it) && is_Leng(*it) && is_BeginNum(*it) && is_NUMU(*it)){
			v2.push_back("YES");
		}
		else{
			v2.push_back("NO");
		}
	}
	for (vector<string>::iterator it = v2.begin(); it != v2.end(); it++){
		
		if (it + 1 == v2.end()){
			cout << *it;
		}
		else{
			cout << *it << " ";
		}
	}
	system("pause");
	return EXIT_SUCCESS;
}