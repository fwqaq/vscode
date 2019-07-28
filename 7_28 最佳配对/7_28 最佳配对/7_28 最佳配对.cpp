#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	int n; cin >> n;
	vector<int> a(n, 0);
	vector<int> b(n, 0);
	for (int i = 0; i < n; i++) cin >> a[i];
	for (int i = 0; i < n; i++) cin >> b[i];
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	int i = 0, j = 0, count = 0;
	while (i < n&&j < n){
		if (a[i] == b[j]) {
			i++; j++; count++;
		}
		else if (a[i] < b[j]) i++;
		else  j++;
	}
	if (count == n) count--;
	else {
		for (int i = 0; i < n; i++){
			if (b[i] == b[i + 1]) {
				count++;
				break;
			}
		}
	}
	cout << count << endl;
	return 0;
}
