#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>

using namespace std;

long long calculateDistance(long long x1, long long y1, long long x2, long long y2)
{
	return pow((x2 - x1), 2) + pow((y2 - y1), 2);
}

int main()
{
	int n;
	long long x1, y1, x2, y2;
	cin >> n >> x1 >> y1 >> x2 >> y2;

	vector<vector<long long>> coordinate;
	coordinate.resize(n);
	for (int i = 0; i < n; i++){
		coordinate[i].resize(2);
		cin >> coordinate[i][0] >> coordinate[i][1];
	}

	long long result = 0;
	long long r1_max = 0, r2_max = 0;
	vector<vector<long long>> r_list;
	r_list.resize(n);

	for (int i = 0; i<n; i++){
		long long r1_temp = calculateDistance(coordinate[i][0], coordinate[i][1], x1, y1);
		long long r2_temp = calculateDistance(coordinate[i][0], coordinate[i][1], x2, y2);

		if (r1_temp > r1_max){
			r1_max = r1_temp;
		}
		if (r2_temp > r2_max){
			r2_max = r2_temp;
		}

		r_list[i].resize(2);
		r_list[i][0] = r1_temp;
		r_list[i][1] = r2_temp;
	}

	sort(r_list.begin(), r_list.end());

	for (int i = 0; i < n - 1; i++){
		long long r1 = r_list[i][0];
		long long r2 = 0;
		for (int j = i + 1; j<n; j++){
			if (r_list[j][1] > r2){
				r2 = r_list[j][1];
			}
		}

		if (i == 0){
			result = r1 + r2;
		}
		else{
			if (result > r1 + r2){
				result = r1 + r2;
			}
		}
	}

	if (r1_max < result){
		if (r1_max < r2_max)
			cout << r1_max << endl;
		else
			cout << r2_max << endl;
	}
	else{
		if (result < r2_max)
			cout << result << endl;
		else
			cout << r2_max << endl;
	}

	return 0;
}