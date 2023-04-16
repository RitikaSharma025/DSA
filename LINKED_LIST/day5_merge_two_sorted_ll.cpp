#include<iostream>
using namespace std;
//INTERVIEWBIT SOLUTION
 //Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
  ListNode* mergeTwoLists(ListNode* A, ListNode* B) {
    ListNode* head = new ListNode(-1);
    ListNode* temp = head;
    while(A&&B)
    {
        if(A->val<=B->val)
        {
            temp->next = A;
            A = A->next;
            temp = temp->next;
        }
        else
        {
            temp->next = B;
            B = B->next;
            temp = temp->next;
        }
    }
    if(A)
    {
        temp->next = A;
    }
    else
    {
        temp->next = B;
    }
    return head->next;
}
