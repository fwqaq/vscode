#include <iostream>
#include <vector>

using namespace std;

int main() {
	int memberCount, carCount;
	std::cin >> memberCount;
	std::cin >> carCount;

	vector<vector<int>> groups;
	vector<int> group;
	int count = carCount;
	for (int i = 0; i < memberCount; ++i) {
		if (count-- > 0) {
			int v = 0;
			cin >> v;
			group.push_back(v);
		}
		if (count == 0 || i == memberCount - 1) {
			groups.push_back(group);
			group.clear();
			count = carCount;
		}
	}
	for (auto itor = groups.crbegin(); itor != groups.crend(); ++itor) {
		for (const auto& num : *itor) {
			cout << num << " ";
		}
	}
}