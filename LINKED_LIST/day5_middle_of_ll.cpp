#include<iostream>
using namespace std;
//CODESTUDIO SOLUTION
 class Node 
        { 
        public:
            int data;
            Node *next;
            Node(int data) 
            {
               this->data = data;
              this->next = NULL;
            }
        };
Node *findMiddle(Node *head) {
    // Write your code here
    Node* slow = head;
    Node* fast = head;
    while(fast&&fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}