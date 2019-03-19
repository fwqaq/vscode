#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
	double n = 0;
	int m = 0;

	while (cin >> n >> m){
		double sum = 0;
		for (int i = 0; i < m; i++){
			sum += n*1.0;
			n = sqrt(n);
		}
		cout << setiosflags(ios::fixed) << setprecision(2)<<sum<<endl;
	}
	system("pause");
	return EXIT_SUCCESS;
}