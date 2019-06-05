#include<string>
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

const vector<string> poker = { "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A", "2", "joker", "JOKER" };//牌的值信息 3为1 JOKER为15

void typein_cards(int *card, string s){
	int start = 0, offset = 0;
	for (int i = 0; i <= s.size(); ++i){
		if (s[i] == '-' || s[i] == ' ' || i == s.size()) {
			if (*(card + offset) == 0){
				auto iter = find(poker.begin(), poker.end(), string(s.begin() + start, s.begin() + i));
				*(card + offset) = (iter - poker.begin()) + 1;
			}
			++(*(card + offset + 2));
			if (s[i] == '-'){
				offset = 3;
				start = i + 1;
			}
		}
	}
	for (offset = 0; offset <= 3; offset += 3){
		if (((*(card + offset)) == 14 || (*(card + offset)) == 15) && (*(card + offset + 2)) == 2)  {
			*(card + offset + 1) = 4;
		}
		else *(card + offset + 1) = ((*(card + offset + 2) <= 5) ? *(card + offset + 2) : 5);
	}
}

int main(){
	string pokers;
	while (getline(cin, pokers)){
		int cards[6] = {};//数组表示两副牌的信息，首位表示类型 1。单 2.双 3.三个 4:炸 5: 顺子 次位表示牌面大小，顺子按照最低位标识 最后一位表示牌的树木。
		typein_cards(cards, pokers);
		if (cards[1] == cards[4]) {
			if (cards[0] > cards[3]){
				auto iter = find(pokers.begin(), pokers.end(), '-');
				cout << string(pokers.begin(), iter) << endl;
			}
			else{
				auto iter = find(pokers.begin(), pokers.end(), '-');
				cout << string(iter + 1, pokers.end()) << endl;
			}
		}
		else if (cards[1] == 4 || cards[4] == 4){
			if (cards[1] == 4){
				auto iter = find(pokers.begin(), pokers.end(), '-');
				cout << string(pokers.begin(), iter) << endl;
			}
			else{
				auto iter = find(pokers.begin(), pokers.end(), '-');
				cout << string(iter + 1, pokers.end()) << endl;
			}
		}
		else cout << "ERROR" << endl;
	}
	return 0;
}