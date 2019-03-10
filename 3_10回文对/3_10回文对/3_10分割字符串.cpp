/*
����һ��Ψһ�ĵ��ʣ� �ҳ����в�ͬ ��������(i, j)��ʹ���б��е��������ʣ� words[i] + words[j] ����ƴ�ӳɻ��Ĵ���
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
	cin >> s;//����һ���ַ����ÿո��������
	
	vector<string> strs;
    SplitString(s,strs, " ");
	for (vector<string>::iterator it = strs.begin(); it != strs.end(); it++){
		cout << *it << endl;
	}

	system("pause");
	return EXIT_SUCCESS;
}