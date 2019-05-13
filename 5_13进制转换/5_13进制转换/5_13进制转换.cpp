#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
	int m, n;
	while (cin >> m >> n){
		string res;
		int flag = 0;
		if (m < 0){
			flag = 1;
			m = -m;
		}
		while (1){
			int r = m%n;
			if (r < 10)
				res.push_back(r + '0');
			else{
				string b;
				if (r == 10)
					b = "A";
				else if (r == 11)
					b = "B";
				else if (r == 12)
					b = "C";
				else if (r == 13)
					b = "D";
				else if (r == 14)
					b = "E";
				else
					b = "F";
				res += b;
			}
			int k = m / n;
			if (k == 0)
				break;
			m = k;
		}
		if (flag == 1)
			res.push_back('-');
		reverse(res.begin(), res.end());

		cout << res << endl;
	}
}