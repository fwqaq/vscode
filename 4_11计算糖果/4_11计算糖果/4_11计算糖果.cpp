#include <iostream>
using namespace std;
int main(){
	double A, B, C;
	double A_sub_B;
	double B_sub_C;
	double A_add_B;
	double B_add_C;
	cin >> A_sub_B >> B_sub_C >> A_add_B >> B_add_C;
	A = (A_sub_B + A_add_B) / 2.0;
	B = (B_sub_C + B_add_C) / 2.0;
	if (A - B == A_sub_B){
		C = B_add_C - B;
		if (A > 0 && B > 0 && C > 0){
			int int_A = (int)A;
			int int_B = (int)B;
			int int_C = (int)C;
			double double_A = (double)(int_A);
			double double_B = (double)(int_B);
			double double_C = (double)(int_C);
			if (double_A == A&&double_B == B&&double_C == C){
				cout << A << " " << B << " " << C << endl;
			}
			else{
				cout << "No" << endl;
			}
		}
		else{
			cout << "No" << endl;
		}
	}
	else{
		cout << "No" << endl;
	}
	system("pause");
	return EXIT_SUCCESS;
}