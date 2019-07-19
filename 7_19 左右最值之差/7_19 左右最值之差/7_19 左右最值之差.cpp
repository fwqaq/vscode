#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
class MaxGap {
public:
	int findMaxGap(vector<int> A, int n) {
		// write code here
		vector<int>v1;
		vector<int>v2;
		v1.resize(n);
		v2.resize(n);
		v1[0] = A[0];
		for (int i = 1; i < n; i++){
			if (A[i]>v1[i - 1]){
				v1[i] = A[i];
			}
			else{
				v1[i] = v1[i - 1];
			}
		}
		v2[n - 1] = A[n - 1];
		for (int i = n - 2; i >= 0; i--){
			if (A[i] > v2[i + 1]){
				v2[i] = A[i];
			}
			else{
				v2[i] = v2[i + 1];
			}
		}
		int max1 = 0;
		for (int i = 0; i < n - 1; i++){
			if (abs(v1[i] - v2[i + 1])>max1){
				max1 = abs(v1[i] - v2[i + 1]);
			}
		}
		return max1;
	}
};
int main(){

	MaxGap m;
	m.findMaxGap({ 2, 7, 3, 1, 1 }, 5);

	system("pause");
	return EXIT_SUCCESS;
}