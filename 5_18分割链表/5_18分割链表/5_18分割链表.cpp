#include <iostream>
#include <vector>
using namespace std;

 struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };

ListNode* partition(ListNode* head, int x)
{
	if (head == NULL)
		return NULL;
	ListNode* re;
	vector<ListNode*> small;
	vector<ListNode*> big;
	while (head != NULL)
	{
		if (head->val<x)
			small.push_back(head);
		else
			big.push_back(head);
		head = head->next;
	}
	if (!small.empty())
	{
		ListNode* start = small[0];
		re = start;
		for (int i = 1; i<small.size(); i++)
		{
			start->next = small[i];
			start = start->next;
		}
		for (int j = 0; j<big.size(); j++)
		{
			start->next = big[j];
			start = start->next;
		}
		start->next = NULL;
	}
	else
	{
		ListNode* start = big[0];
		re = start;
		for (int i = 1; i<big.size(); i++)
		{
			start->next = big[i];
			start = start->next;
		}
		start->next == NULL;
	}
	return re;
};
int main(){

	return EXIT_SUCCESS;
}
