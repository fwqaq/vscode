/*
// Employee info
class Employee {
public:
// It's the unique ID of each node.
// unique id of this employee
int id;
// the importance value of this employee
int importance;
// the id of direct subordinates
vector<int> subordinates;
};
*/
class Solution {
public:
	int getImportance(vector<Employee*> employees, int id) {
		queue<int> q;
		q.push(id);
		unordered_map<int, Employee*> info;
		for (auto& e : employees){
			info[e->id] = e;
		}
		int ret = 0;
		while (!q.empty()){
			int curid = q.front();
			q.pop();
			ret += info[curid]->importance;
			for (auto& e : info[curid]->subordinates){
				q.push(e);
			}
		}
		return ret;
	}

	//     int DFS(unordered_map<int,Employee*>em,int id){
	//         int curRet = em[id]->importance;
	//         for(auto& e:em[id]->subordinates){
	//            curRet += DFS(em,e);
	//         }
	//         return curRet;
	//     }
	//     int getImportance(vector<Employee*> employees, int id) {
	//         if(employees.empty()){
	//             return 0;
	//         }
	//         unordered_map<int,Employee*>em;
	//         for(auto& e:employees){
	//             em[e->id] = e;
	//         }
	//         return DFS(em,id);
	//     }

};