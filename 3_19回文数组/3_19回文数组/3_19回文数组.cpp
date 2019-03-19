#include <iostream>
using namespace std;
#include <vector>
int main(){
	int num = 0;
	cin >> num;
	vector<int>v;
	for (int i = 0; i < num; i++){
		v.push_back(num);
	}
	int sum = 0;
	int first = 0;
	int end = num - 1;
	while (end - first >= 0){
		if (v[first] == v[end]){
			first++;
			end--;
			continue;
			sum += v[first];
			sum += v[end];
		}
		if (v[first] > v[end]){
			sum += v[end];
			first++;
		}
		else{
			sum += v[first];
			end--;
		}
	}
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++){
		sum += *it;
	}

	cout << sum << endl;

	system("pause");
	return EXIT_SUCCESS;
}