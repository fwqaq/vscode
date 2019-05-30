#include <iostream>
using namespace std;
class LCA {
public:
	int getLCA(int a, int b) {
		// write code here
		//选出小的
		long long min1 = a > b ? b : a;
		long long max1 = a > b ? a : b;
		while (!((max1-min1)<=1&&max1/2==min1/2)){
			max1 /= 2;
			if (max1 < min1){
				int temp = max1;
				max1 = min1;
				min1 = temp;
			}
		}
		if (max1 == min1){
			return max1;
		}
		return max1 / 2;
	}
};
int main(){
	LCA l;
	cout << l.getLCA(9, 7) << endl;
	system("pause");
	return EXIT_SUCCESS;
}