#include<iostream>
using namespace std;
// LEETCODE SOLUTION
//ITERATIVE SOLUTION
 // Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = 0;
        ListNode* cur = head;
        while(cur)
        {
            ListNode* nex = cur->next;
            cur->next = prev;
            prev = cur;
            cur = nex;
        }
        return prev;
    }
};
//RECURSIVE SOLUTION

class Solution {
public:

    ListNode* reverseList(ListNode* &head) {

        if (head == NULL||head->next==NULL)
            return head;

        ListNode* nnode = reverseList(head->next);
        head->next->next = head;
        head->next = NULL;
        return nnode;
    }
};