#include<vector>
#include<map>
#include<iostream>
using namespace std;
struct Point {
	int x;
	int y;
	int z;
	Point() : x(0), y(0), z(0) {}
	Point(int a, int b, int c) : x(a), y(b), z(c) {}
};
int gcd(int a, int b) { return b == 0 ? a : gcd(b, a%b); }
int gcd(int a, int b, int c) { return gcd(gcd(a, b), c); }
int max(int a, int b) { return a > b ? a : b; }
int maxPoints(vector<Point>& points) {
	int ans = 0;
	for (int i = 0; i < points.size(); i++) {
		int cnt = 0, overLap = 0;
		map<pair<pair<int, int>, int>, int> line;
		for (int j = i + 1; j < points.size(); j++) {
			int dx = points[i].x - points[j].x;
			int dy = points[i].y - points[j].y;
			int dz = points[i].z - points[j].z;
			//判断两点是否重合
			if (dx == 0 && dy == 0 && dz == 0) {
				++overLap;
				continue;
			}
			//计算最简方向向量并存入map容器中,同时更新cnt
			int g = gcd(dx, dy, dz);
			dx /= g;
			dy /= g;
			dz /= g;
			cnt = max(cnt, ++line[pair<pair<int, int>, int>(pair<int, int>(dx, dy), dz)]);
		}
		//统计该基准点下的最大共线点数量
		//cnt+重合点+基准点自身
		ans = max(ans, cnt + overLap + 1);
	}
	return ans;
}
int main() {
	int N;
	scanf("%d", &N);
	vector<Point> vec;
	for (int i = 0; i < N; i++) {
		Point tmp;
		scanf("%d %d %d", &tmp.x, &tmp.y, &tmp.z);
		vec.push_back(tmp);
	}
	cout << maxPoints(vec) << endl;
	return 0;
}