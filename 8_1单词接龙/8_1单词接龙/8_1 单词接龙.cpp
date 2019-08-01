#include <string>
#include <unordered_set>
#include <vector>
#include <queue>
using namespace std;
class Solution {
public:
	int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
		//hash表的查询效率高
		unordered_set<string> wordDict(wordList.begin(), wordList.end());
		//标记单词是否已经访问过了
		unordered_set<string>visited;
		visited.insert(beginWord);
		//初始化队列
		queue<string>q;
		q.push(beginWord);
		int res = 1;
		while (!q.empty()){
			int nextSize = q.size();      
			//每一步都要把队列中上一步添加的所有单词转换一遍         
			//短的转换肯定在这些单词当中， 所有这些词的转换只能算一次转换    
			//因为都是上一步转换出来的       
			while (nextSize--){
				string curWord = q.front();
				q.pop();
				//尝试转换当前单词的每一个位置      
				for (int i = 0; i < curWord.size(); i++){
					string newWord = curWord;
					//每一个位置用26个字母分别替换             
					for (auto ch = 'a'; ch <= 'z'; ch++){
						newWord[i] = ch;
						//如果列表中没有此单词或者已经访问过（它的转换已经遍历过，无需再次遍历），则 跳过     
						if (!wordDict.count(newWord) || visited.count(newWord))
							continue;
						//转换成功，则在上一步转换的基础上+1         
						if (newWord == endWord)
							return res + 1;
						//还没有转换成功，则新的单词入队 
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