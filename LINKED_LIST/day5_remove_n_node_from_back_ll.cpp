#include<iostream>
using namespace std;
//INTERVIEWBIT SOLUTION
 //Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
ListNode* removeNthFromEnd(ListNode* A, int B) {
    ListNode* h = new ListNode(-1);
    h->next = A;
    ListNode* fast = h,*slow = h;
    for(int i=1;i<=B;i++)
    {
        if(fast)
         fast = fast->next;
    }
    while(fast&&fast->next)
    {
        slow = slow->next;
        fast = fast->next;
    }
    if(slow&&slow->next)
     slow->next = slow->next->next;
    return h->next;
}