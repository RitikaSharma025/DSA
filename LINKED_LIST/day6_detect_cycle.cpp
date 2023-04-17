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