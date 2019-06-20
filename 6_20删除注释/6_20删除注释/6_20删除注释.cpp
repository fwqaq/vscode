#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Solution {
public:
	vector<string> removeComments(vector<string>& source) {
		int flag = 1;
		vector<string>v;
		for (int i = 0; i < source.size(); i++){
			int post = 0;
			if ((post = source[i].find("//") )!= -1){
				if (post == 0){
					v.push_back("");
					continue;
				}
				string s = source[i].substr(0, post);
				v.push_back(s);
				continue;
			}
			if ((post = source[i].find("/*")) != -1){
				flag = 0;
				if (post != 0){
					string s = source[i].substr(0, post);
					v.push_back(s);
				}
			}
			if ((post = source[i].find("*/")) != -1){
				flag = 1;
				if (post != source.size() - 1){
					string s = source[i].substr(post + 2, -1);
					if (!s.empty())
						v[v.size() - 1] += s;
				}
				continue;
			}
			if (flag == 1){
				v.push_back(source[i]);
			}
		}
		return v;
	}
};
int main(){
	Solution s;
	vector<string>v;
	v.push_back("wwhkad//kh");
	v.push_back("printf(\"%d\");");
	v.push_back("sakdhk/*jhg");
	v.push_back("sakdqhkjhg");
	v.push_back("sakdhakjhg");
	v.push_back("sakdf*/hkjhg");
	v.push_back("//abc");
	v.push_back("}");
	vector<string> str = s.removeComments(v);
	for (string e : str){
		cout << e << endl;
	}


	system("pause");
	return EXIT_SUCCESS;
}