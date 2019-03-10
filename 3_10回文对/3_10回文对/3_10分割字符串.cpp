/*
给定一组唯一的单词， 找出所有不同 的索引对(i, j)，使得列表中的两个单词， words[i] + words[j] ，可拼接成回文串。
*/
#include <iostream>
#include <string>
using namespace std;
#include <vector>
void SplitString(const std::string& s, std::vector<std::string>& v, const std::string& c)
{
	std::string::size_type pos1, pos2;
	pos2 = s.find(c);
	pos1 = 0;
	while (std::string::npos != pos2)
	{
		v.push_back(s.substr(pos1, pos2 - pos1));

		pos1 = pos2 + c.size();
		pos2 = s.find(c, pos1);
	}
	if (pos1 != s.length())
		v.push_back(s.substr(pos1));
}
int main(){
	string s;
	cin >> s;//输入一个字符串用空格隔开单词
	
	vector<string> strs;
    SplitString(s,strs, " ");
	for (vector<string>::iterator it = strs.begin(); it != strs.end(); it++){
		cout << *it << endl;
	}

	system("pause");
	return EXIT_SUCCESS;
}