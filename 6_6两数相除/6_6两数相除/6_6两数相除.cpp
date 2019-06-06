#include <iostream>
using namespace std;
#define LIMIT 0x80000000
class Solution {
public:
	int divide(int dividend, int divisor) {

		if (dividend == 0) {
			return 0;
		}
		if (dividend == INT_MIN && divisor == -1) {
			return INT_MAX;
		}
		bool negative;
		negative = (dividend ^ divisor) < 0;//������������Ƿ��������
		unsigned int t = dividend == INT_MIN ? LIMIT : abs(dividend);
		unsigned int d = divisor == INT_MIN ? LIMIT : abs(divisor);
		unsigned int result = 0;
		for (int i = 31; i >= 0; i--) {
			if ((t >> i) >= d) {//�ҳ��㹻�����2^n*divisor
				result += ((unsigned int)1) << i;//���������2^n
				t -= d << i;//����������ȥ2^n*divisor
			}
		}
		if (result == LIMIT) {//���������ܽ�unsigned intתΪint
			return INT_MIN;
		}
		else {
			return negative ? -(int)result : (int)result;//��������ȡ��
		}
	}
};
int main(){
	Solution s;
	cout << s.divide(INT_MAX,INT_MIN);
	system("pause");
	return EXIT_SUCCESS;
}