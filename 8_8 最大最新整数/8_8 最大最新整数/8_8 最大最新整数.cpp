#include <iostream>
#include <string>
using namespace std;

string findN(string L, int K){
	if (L.size() == 0) return "";
	if (L.size() == 1) return K == 0 ? L : "";

	for (auto iter = L.begin(); iter != L.end() - 1;){
		if (!(isdigit(*iter) && isdigit(*(iter + 1))))
			break;
		if (K == 0)
			break;
		if (*iter < *(iter + 1)){
			iter = L.erase(iter);
			--K;
			if (iter != L.begin())
				--iter;
		}
		else{
			++iter;
		}
	}

	if (K == 0)
		return L;
	else
		return L.substr(0, L.size() - K);
}

int main()
{
	string inL; int d;
	cin >> inL;
	cin >> d;
	//cout << "input " << inL << "-- " << d;
	string out = findN(inL, d);
	cout << out << std::endl;
	return 0;
}
