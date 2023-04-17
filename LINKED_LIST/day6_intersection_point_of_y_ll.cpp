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
        int len(Node* h)
{
	int n = 0;
	while(h)
	{
		n++;
		h = h->next;
	}
	return n;
}
int findIntersection(Node *firstHead, Node *secondHead)
{
    //Write your code here
	int n1 = len(firstHead), n2 = len(secondHead);
	if(n1<=n2)
	{
		for(int i=1;secondHead&&i<=n2-n1;i++)
		{
			secondHead = secondHead->next;
		}
	}
	else
	{
		for(int i=1;firstHead&&i<=n1-n2;i++)
		{
			
			firstHead = firstHead->next;
		}
	}
	while(firstHead&&secondHead&&firstHead!=secondHead)
	{
		firstHead = firstHead->next;
		secondHead = secondHead->next;
	}
	if(firstHead)
	 return firstHead->data;
	return -1;
}
//OPTIMAL SOLUTION
Node* intersectionPresent(Node* head1,Node* head2) {
    Node* d1 = head1;
    Node* d2 = head2;
    
    while(d1 != d2) {
        d1 = d1 == NULL? head2:d1->next;
        d2 = d2 == NULL? head1:d2->next;
    }
    
    return d1;
}
