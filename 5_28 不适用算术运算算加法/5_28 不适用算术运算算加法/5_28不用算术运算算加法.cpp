#include <iostream>
using namespace std;
class UnusualAdd {
public:
	int addAB(int A, int B) {
		if (B == 0)
			return A;
		int sum = A ^ B;   //�������  
		int carry = (A & B) << 1;     //��0��0��0��1��1��0���ԣ������������λ��ֻ��1��1ʱ������ǰ����һ����λ���������������λ�����㣬Ȼ���������ƶ�һλ��  
		return addAB(sum, carry);
	}
};
int main(){
	UnusualAdd a;
	cout << a.addAB(4, 5) << endl;
	system("pause");
	return EXIT_SUCCESS;
}