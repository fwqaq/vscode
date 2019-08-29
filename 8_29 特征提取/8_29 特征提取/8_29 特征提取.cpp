#include<iostream>
#include<unordered_set>
#include<vector>
using namespace std;

struct CatFeature{
	int x, y;

	bool operator==(const CatFeature& other) const{
		return x == other.x && y == other.y;
	}
};

struct CFhash{
	size_t operator()(const CatFeature& f)const{
		return f.x + f.y;
	}
};


void solve(){
	int N; cin >> N;
	vector<unordered_set<CatFeature, CFhash>> video(N);
	for (int i = 0; i < N; ++i){
		int n; cin >> n;
		for (int j = 0; j < n; ++j){
			int x, y; cin >> x >> y;
			video[i].insert({ x, y });
		}
	}
	int retval = 1;
	for (int i = 0; i < N; ++i){
		for (auto iter = video[i].begin(); iter != video[i].end(); ++iter){
			int j = i + 1;
			for (; j < N && video[j].count(*iter); ++j)
				video[j].erase(*iter);
			retval = std::max(retval, j - i);
			if (retval >= N - i)
				goto LOOPEND;
		}
	}
LOOPEND:
	cout << retval << '\n';
}

int main(){
	int M; cin >> M;
	for (int i = 0; i < M; ++i)
		solve();
	return 0;
}
