#include <string>
#include <unordered_set>
#include <vector>
#include <queue>
using namespace std;
class Solution {
public:
	int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
		//hash��Ĳ�ѯЧ�ʸ�
		unordered_set<string> wordDict(wordList.begin(), wordList.end());
		//��ǵ����Ƿ��Ѿ����ʹ���
		unordered_set<string>visited;
		visited.insert(beginWord);
		//��ʼ������
		queue<string>q;
		q.push(beginWord);
		int res = 1;
		while (!q.empty()){
			int nextSize = q.size();      
			//ÿһ����Ҫ�Ѷ�������һ����ӵ����е���ת��һ��         
			//�̵�ת���϶�����Щ���ʵ��У� ������Щ�ʵ�ת��ֻ����һ��ת��    
			//��Ϊ������һ��ת��������       
			while (nextSize--){
				string curWord = q.front();
				q.pop();
				//����ת����ǰ���ʵ�ÿһ��λ��      
				for (int i = 0; i < curWord.size(); i++){
					string newWord = curWord;
					//ÿһ��λ����26����ĸ�ֱ��滻             
					for (auto ch = 'a'; ch <= 'z'; ch++){
						newWord[i] = ch;
						//����б���û�д˵��ʻ����Ѿ����ʹ�������ת���Ѿ��������������ٴα��������� ����     
						if (!wordDict.count(newWord) || visited.count(newWord))
							continue;
						//ת���ɹ���������һ��ת���Ļ�����+1         
						if (newWord == endWord)
							return res + 1;
						//��û��ת���ɹ������µĵ������ 
						visited.insert(newWord);
						q.push(newWord);
					}
				}
			}
			res++;
		}
		return 0;
	}
};