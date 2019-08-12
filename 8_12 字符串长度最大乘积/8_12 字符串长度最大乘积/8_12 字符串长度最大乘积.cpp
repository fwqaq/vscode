#include <iostream>
#include <string>
#include <string.h>

#include <vector>
#include <stack>
#include <iterator>
#include <algorithm>
#include<iomanip>
#include<list>
#include<math.h>
using namespace std;
using std::string;
bool noContain(string s1, string s2) {
	int idx = -1;
	int len = s1.length();
	for (int i = 0; i < len; i++)
	{
		if (strstr(s2.c_str(), s1.substr(i, i + 1).c_str()) != NULL)
		{
			return false;
		}
	}
	return true;
}

int str_getmax()
{
	string str_data;
	cin >> str_data;

	//去除中括号
	str_data = str_data.substr(1, (str_data.length() - 2));
	//去除双引号
	string str_data2;
	int len = str_data.length();
	for (int i = 0; i < len - 1; i++)
	{
		if (str_data[i] == '\"')
		{
			continue;
		}
		str_data2 += str_data[i];
	}
	//printf("str_data af:%s\n", str_data2.c_str());

	char * ch_data = (char *)str_data2.c_str();
	char* ret_data = strtok(ch_data, ",");
	vector<string> vec_temp;
	int i = 0;
	while (ret_data != NULL)
	{
		vec_temp.push_back(ret_data);
		ret_data = strtok(NULL, ",");
	}
	int max_leng = 0;
	int vec_len = vec_temp.size();
	for (int i = 0; i < vec_len - 1; i++)
	{
		for (int j = 1; j < vec_len - 1; j++)
		{
			if (noContain(vec_temp[i], vec_temp[j]))
			{
				int len1 = vec_temp[i].length();
				int len2 = vec_temp[j].length();
				if ((len1*len2)>max_leng)
				{
					max_leng = len1*len2;
				}
			}
		}
	}
	return max_leng;
}



int main()
{
	int ret = str_getmax();
	printf("%d\n", ret);
	return 0;
}
