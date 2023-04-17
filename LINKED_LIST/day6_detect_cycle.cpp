#include<iostream>
using namespace std;

//CODESTUDIO SOLUTION
//Following is the class structure of the Node class:

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
bool detectCycle(Node *head)
{
	//	Write your code here
	Node* slow = head;
	Node* fast = head;
	do{
		
     slow = slow->next;
	 if(fast&&fast->next)
	  fast = fast->next->next;
	 if(slow==fast)
		 return 1;
	}while(fast&&fast->next&&slow!=fast);
	return 0;
}
//FIND STARTING POINT OF LOOP
struct ListNode {
     int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
ListNode* iscycle(ListNode* h)
{
    ListNode* slow = h;
    ListNode* fast = h;
    while(fast&&fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
        if(fast==slow)
         return slow;
    }
    return 0;
}
ListNode* detectCycle(ListNode* A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    ListNode* intersection = iscycle(A);
    if(!intersection)
    {
        return 0;
    }
    ListNode* start = A;
    while(start!=intersection)
    {
        start = start->next;
        intersection = intersection->next;
    }
    return start;

}