#include <iostream>
#include <vector>
#include <algorithm>
using namespace::std;

struct node {
	int w;
	int h;
	node(int _w, int _h) : w(_w), h(_h) {}
};

bool cmp(node first, node next) {
	if (first.w != next.w) {
		return first.w < next.w;
	}
	else {
		return first.h > next.h;
	}
}

int main() {
	int input;

	while (cin >> input) {
		int num, w, h;
		vector<node> vec;
		for (int i = 0; i < input; ++i) {
			cin >> num >> w >> h;
			node tmp(w, h);
			vec.push_back(tmp);
		}

		stable_sort(vec.begin(), vec.end(), cmp);

		vector<int> dq(input + 1, 0);
		dq[0] = 1;
		for (int i = 0; i < input; ++i) {
			dq[i] = 1;
			for (int j = 0; j < i; ++j) {
				if (vec[j].h <= vec[i].h && dq[j] + 1 >= dq[i]) {
					dq[i] = dq[j] + 1;
				}
			}
		}

		int max = 0;
		for (int i = 0; i < dq.size(); ++i) {
			if (max < dq[i]) max = dq[i];
		}

		cout << max << endl;
	}

	system("pause");
	return EXIT_SUCCESS;
}