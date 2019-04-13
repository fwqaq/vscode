#include <iostream>
using namespace std;

struct ListNode {
int val;
struct ListNode *next;
ListNode(int x) :
val(x), next(NULL) {
}
};
class Solution {
public:
	ListNode* Merge(ListNode* pHead1, ListNode* pHead2)  {
		ListNode* list1 = pHead1;
		ListNode* list2 = pHead2;
		if (list1 == NULL){
			return list2;
		}
		if (list2 == NULL){
			return list1;
		}
		if (list1->val <= list2->val){
			list1->next = Merge(list1->next, list2);
			return list1;
		}
		else{
			list2->next = Merge(list1, list2->next);
			return list2;
		}
	}
};