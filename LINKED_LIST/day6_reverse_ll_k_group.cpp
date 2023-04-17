#include<iostream>
using namespace std;
 // Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
 
ListNode* reverseList(ListNode* A, int B) {
    if(!A)
     return 0;
    ListNode* cur = A,*prev = 0;
    int cn = 0;
    while(cur&&cn<B)
    {
        ListNode* nex = cur->next;
        cur->next = prev;
        prev = cur;
        cur = nex;
        cn++;
    }
    if(cur)
    {
        A->next = reverseList(cur,B);
    }
    return prev;
}