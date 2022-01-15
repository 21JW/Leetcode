#include"Reverse Linked List.h"


class Solution
{
public:

    ListNode* CreateSinglyListNode(int x)
    {
        ListNode* newNode = (ListNode*)malloc(sizeof(ListNode));
        if (newNode == NULL)
        {
            printf("Fail to allocate a new node.\n");
            exit(-1);
        }
        newNode->val = x;
        newNode->next = NULL;
        return newNode;
    }

    ListNode* init()
    {
        ListNode* head = CreateSinglyListNode(0);
        return head;
    }

    void SinglyListPush_Front(ListNode* head, int x)
    {
        ListNode* newNode = CreateSinglyListNode(x);
        if (head->next == NULL)
        {
            head->next = newNode;
        }
        else
        {
            ListNode* firstNode = head->next;
            head->next = newNode;
            newNode->next = firstNode;
        }
    }

    ListNode* reverseList(ListNode* head)
    {
        if (head == NULL)
           /*case1:it is an empty List*/
        {
            ;
        }
        else if ((head->next) == NULL)
           /*case2: only 1 element*/
        {
            ;
        }
        else
           /*case3: more than 1 element*/

        {
            head = head->next;
            struct ListNode* prevNode = head;
            struct ListNode* nextNode = head->next;
            prevNode->next = NULL;
            head = prevNode;
            while (nextNode->next != NULL)
            {
                prevNode = nextNode;
                nextNode = nextNode->next;
                prevNode->next = head;
                head = prevNode;
            }
            nextNode->next = head;
            head = nextNode;
        }
        return head;
    }
};
