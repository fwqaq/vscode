#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

int main(){
	int n;
	cin >> n;
	map<string, vector<string>> m;
	string s1, s2;
	while (n--){
		cin >> s1 >> s2;
		m[s1].push_back(s2);
	}
	bool ok = true;
	for (auto it = m.begin(); it != m.end(); ++it){
		if (it->second.size() > 1){
			ok = false;
			cout << it->first;
			for (const string &s : it->second) cout << ' ' << s;
			cout << endl;
		}
	}
	if (ok) cout << "YES" << endl;
	system("pause");
	return EXIT_SUCCESS;
}