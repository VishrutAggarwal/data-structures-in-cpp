#include <bits/stdc++.h> 

using namespace std;

class Node {
    public:
        int data;
        Node *next;
        Node(int data) {
            this->data = data;
            this->next = NULL;
        }
};


Node *addTwoNumbers(Node *head1, Node *head2)
{
    Node *sumHead = new Node(0);
    
    Node *sumTemp = sumHead;
    
    int carry = 0;
    
    while(head1 != NULL || head2 != NULL || carry) {
        int sum = 0;
        
        if(head1 != NULL) {
            sum += head1->data;
            head1 = head1->next;
        }
        
        if(head2 != NULL) {
            sum += head2->data;
            head2 = head2->next;
        }
        
        sum += carry;
        carry = sum/10;
        
        Node *newnode = new Node(sum % 10); 
        sumTemp->next = newnode; 
        sumTemp = sumTemp->next; 
    }
    
    return sumHead->next;
}
