#include <iostream>
using namespace std;
/**
* Definition for singly-linked list.
* struct ListNode {
*     int val;
*     ListNode *next;
*     ListNode(int x) : val(x), next(NULL) {}
* };
*/
struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
	
};
class Solution {
public:
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
		int flag = 0;
		ListNode* node = l1;
		ListNode* last;
		while (l1 != nullptr && l2 != nullptr){
			if (l1->next == nullptr){
				last = l1;
			}
			int sum = l1->val + l2->val;
			l1->val = (sum + flag) % 10;
			flag = (sum+flag) / 10;
			l1 = l1->next;
			l2 = l2->next;
		}
		if (l1 == nullptr&&l2 == nullptr&&flag == 1){
			ListNode* n = new ListNode(1);
			last->next = n;
			n->next = nullptr;
			return node;
		}
		if (l2 != nullptr&&l1 == nullptr){
			ListNode* aa;
			last->next = l2;
			while (l2 != nullptr){
				int sum = l2->val;
				l2->val = (sum + flag) % 10;
				flag = (sum + flag) / 10;
				if (l2->next == nullptr){
					aa = l2;
				}
				l2 = l2->next;
			}
			if (flag == 1){
				ListNode* n = new ListNode(1);
				aa->next = n;
				n->next = nullptr;
			}
			return node;
		}
		if (l1 != nullptr&&l2 == nullptr){
			ListNode* aa;
			while (l1 != nullptr){
				int sum = l1->val;
				l1->val = (sum + flag) % 10;
				flag = (sum + flag) / 10;
				if (l1->next == nullptr){
					aa = l1;
				}
				l1 = l1->next;
			}
			if (flag == 1){
				ListNode* n = new ListNode(1);
				aa->next = n;
				n->next = nullptr;
			}
			return node;
		}
	}
};
int main(){

	system("pause");
	return EXIT_SUCCESS;
}