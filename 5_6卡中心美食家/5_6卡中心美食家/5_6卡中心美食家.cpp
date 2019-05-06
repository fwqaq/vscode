#include <iostream>
#include <stack>
#include <vector>
using namespace std;
//邻接表的弧结构
struct ArcNode {
	int index;
	ArcNode *next;
	ArcNode() :index(0), next(nullptr) {}
	ArcNode(int i) :index(i), next(nullptr) {}
};
//邻接表的节点结构
struct VNode {
	int index;
	ArcNode *firArc;
	int in_degree;
	VNode() :index(0), firArc(nullptr), in_degree(0) {}
	VNode(int i) :index(i), firArc(nullptr), in_degree(0) {}
};
//释放弧堆内存
void releaseArc(VNode &node){
	ArcNode *pt = node.firArc;
	while (pt != nullptr && pt->next != nullptr){
		ArcNode *qt = pt->next;
		delete pt;
		pt = qt;
	}
	delete pt;
	node.firArc = nullptr;
}

//释放节点堆内存
void releaseNode(VNode *food, int n){
	for (int i = 0; i < n; i++){
		releaseArc(food[i]);
	}
	delete[]food;
}

int main(){
	int n, m;
	cin >> n >> m;
	VNode *food = new VNode[n];
	for (int i = 0; i < n; i++){
		food[i].index = i;
	}

	//创建邻接表
	int index1, index2;
	while (m--){
		cin >> index1 >> index2;
		if (food[index2].firArc == nullptr)
			food[index2].firArc = new ArcNode(index1);
		else{
			ArcNode *pre = food[index2].firArc;
			while (pre->next != nullptr){
				pre = pre->next;
			}
			pre->next = new ArcNode(index1);
		}

		food[index1].in_degree++;
	}

	//查找入度为0的节点
	stack<VNode> myStack;
	for (int i = 0; i < n; i++){
		if (food[i].in_degree == 0)
			myStack.push(food[i]);
	}

	vector<int> res;
	while (!myStack.empty()){
		VNode topNode = myStack.top();
		myStack.pop();
		res.push_back(topNode.index);
		ArcNode *linkNode = topNode.firArc;
		while (linkNode != nullptr){
			food[linkNode->index].in_degree--;
			if (food[linkNode->index].in_degree == 0){
				myStack.push(food[linkNode->index]);
			}
			linkNode = linkNode->next;
		}

	}

	if (res.size() != n){
		cout << "None" << endl;
	}
	else{
		for (int i = 0; i < n; i++){
			if (i < n - 1)
				cout << res[i] << ",";
			else
				cout << res[i] << endl;
		}
	}
	releaseNode(food, n);
	food = nullptr;
	return 0;
}