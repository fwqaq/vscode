#include <iostream>
#include <vector>
#include <set>
#include <functional>
#include <string>
#include <algorithm>
using namespace std;
struct recode{
	string filename;
	int linenum;
	int count;
	int index;
	recode(string filename_, int linenum_, int index_) :filename(filename_), linenum(linenum_), index(index_){
		count = 1;
	}
};
struct comp{
	bool operator ()(const recode &l, const recode &r) const {
		if (l.count == r.count)
			return l.index < r.index;
		return l.count > r.count;
	}
};
int main(){
	comp comptor;
	vector<recode> s;
	string str;
	int line;
	while (cin >> str >> line){
		bool flag = false;
		int index = str.rfind('\\');
		string name = str.substr(index + 1);
		for (int i = 0; i < s.size(); i++){
			if (s[i].filename == name&&s[i].linenum == line){
				s[i].count++;
				flag = true;
				break;
			}
		}
		if (!flag){
			s.push_back(recode(name, line, s.size()));
		}
	}
	sort(s.begin(), s.end(), comptor);
	for (int i = 0; i < s.size() && i < 8; i++){
		string n = s[i].filename;
		if (n.length()>16)
			n = n.substr(n.length() - 16);
		cout << n << ' ' << s[i].linenum << ' ' << s[i].count << endl;
	}
	return 0;
}
