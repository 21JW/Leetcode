#include"Reverse Linked List.h"
#include"Reverse Linked List.cpp"


int main()
{
	class Solution test;
	ListNode* head=test.init();
	test.SinglyListPush_Front(head, 1);
	test.SinglyListPush_Front(head, 2);
	test.SinglyListPush_Front(head, 3);
	test.SinglyListPush_Front(head, 5);
	test.reverseList(head);
	return 0;
}