#include <iostream>
using namespace std;
class UnusualAdd {
public:
	int addAB(int A, int B) {
		if (B == 0)
			return A;
		int sum = A ^ B;   //异或运算  
		int carry = (A & B) << 1;     //对0加0、0加1、1加0而言，都不会产生进位，只有1加1时，会向前产生一个进位。因此两个数先做位与运算，然后再向左移动一位。  
		return addAB(sum, carry);
	}
};
int main(){
	UnusualAdd a;
	cout << a.addAB(4, 5) << endl;
	system("pause");
	return EXIT_SUCCESS;
}