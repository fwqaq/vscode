#include <iostream>
using namespace std;
class BinInsert {
public:
	int binInsert(int n, int m, int j, int i) {
		// write code here
		//1 0 0 0 0 0 0 0 0 0 0 == 1024
		//        1 0 0 1 1 == 19
		m = m << j;
		n = n | m;
		return n;
	}
};
int main(){
	BinInsert b;
	cout << b.binInsert(1024, 19, 2, 6) << endl;

	system("pause");
	return EXIT_SUCCESS;
}