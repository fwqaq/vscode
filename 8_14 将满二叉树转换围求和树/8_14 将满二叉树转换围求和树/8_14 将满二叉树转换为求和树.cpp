# include <iostream>
# include <vector>
# include <algorithm>
# include <string>
# include <sstream>
using namespace std;


void digui(vector<int> &v1, vector<int> &v2, int indexofv1, int left2, int right2, vector<int> &res){
	if (left2 > right2)
		return;
	if (left2 == right2){
		res[left2] = 0;
		return;
	}
	int temp = 0;

	int i = left2;
	for (; i <= right2; i++)
		temp += v2[i];

	i = left2;
	for (; i <= right2; i++){
		if (v2[i] == v1[indexofv1])
			break;
	}
	res[i] = temp - v1[indexofv1];

	digui(v1, v2, indexofv1 + 1, left2, i - 1, res);
	digui(v1, v2, indexofv1 + 1 + i - left2, i + 1, right2, res);


}

int main(){
	string str1, str2;
	getline(cin, str1);
	getline(cin, str2);
	vector<int> vec1, vec2;
	istringstream str(str1);
	int temp;
	while (str >> temp)
		vec1.push_back(temp);
	istringstream str0(str2);
	while (str0 >> temp)
		vec2.push_back(temp);

	vector<int> res(vec1.size(), 0);
	digui(vec1, vec2, 0, 0, vec1.size() - 1, res);
	for (int i = 0; i < res.size(); i++)
		cout << res[i] << " ";
	cout << endl;
}
