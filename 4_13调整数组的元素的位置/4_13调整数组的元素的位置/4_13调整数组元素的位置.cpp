#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
	void reOrderArray(vector<int> &array) {
		//�ҵ���һ��ż�����±�
		int fir = 0;
		for (int i = 0; i < array.size(); i++){
			if (array[i] % 2 == 0){
				fir = i;
				break;
			}
		}
		for (int i = fir; i<array.size(); i++){
			if (array[i] % 2 != 0){
				//��ʱ��Ҫ���ǽ������ƶ������ǵ�fir��ȥ
				int ret = array[i];
				int j = 0;
				for (j = i; j > fir; j--){
					array[j] = array[j - 1];
				}
				array[j] = ret;
				fir++;
			}
		}
	}
};