#include <iostream>
using namespace std;
class Solution {
public:
	int computeArea(int A, int B, int C, int D, int E, int F, int G, int H) {
		//计算重叠后形成的总面积，就是两个的面积减去公有的面积
		int s1 = (C - A)*(D - B);
		int s2 = (G - E)*(H - F);
		int s3 = 0;
		int weight = 0;
		int height = 0;
		if (G > C)
		{
			if (C > E && E > A)
				weight = C - E;
			else if (C > E)
				weight = C - A;
		}
		else
		{
			if (G > A && A > E)
				weight = G - A;
			else if (G > A)
				weight = G - E;
		}
		if (H > D)
		{
			if (D > F && F > B)
			{
				height = D - F;
			}
			else if (D > F)
			{
				height = D - B;
			}
		}
		else
		{
			if (H > B && B > F)
				height = H - B;
			else if (H > B)
				height = H - F;
		}
		if (height != 0 && weight != 0)
			s3 = height*weight;
		return s1 - s3 + s2;
	}
};
int main(){
	int A = 0, B = 0, C = 0, D = 0, E = 0, F = 0, G = 0, H = 0;
	cin >> A >> B >> C >> D >> E >> F >> G >> H;
	Solution s;
	cout<<s.computeArea(A, B, C, D, E, F, G, H);

	system("pause");
	return EXIT_SUCCESS;
}