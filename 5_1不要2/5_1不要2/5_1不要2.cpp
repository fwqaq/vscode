#include<iostream>
using namespace std;
int main(){
	int W, H, i, j, counts = 0;
	cin >> W >> H;
	if (W % 4 == 0 || H % 4 == 0){
		counts = W*H / 2;
	}else if(W % 2 == 0 && H % 2 == 0){
		counts = (W*H / 4 + 1) * 2;
	}
	else{
		counts = W*H / 2 + 1;
	}
	cout << counts << endl;
	system("pause");
	return EXIT_SUCCESS;

}