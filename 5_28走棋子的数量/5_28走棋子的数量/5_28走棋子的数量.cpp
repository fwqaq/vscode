#include <iostream>
using namespace std;
int sum = 0;
void sumKinds(int y, int x, int n, int m){
	//x和y是现在的位置上的坐标,x是横坐标，对应着我们的m，y是总坐标，对应着我们的n
	if (x == m&&y == n){
		sum++;
	}
	if (x > m || y > n){
		return;
	}
	sumKinds(y + 1, x, n, m);
	sumKinds(y, x + 1, n, m);
}
int main(){
	int m = 0;
	int n = 0;
	while (cin >> n >> m){
		sumKinds(1, 1, n + 1, m + 1);
		cout << sum << endl;
		sum = 0;
	}

}