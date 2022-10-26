#include <bits/stdc++.h> 

using namespace std;

class Node { 
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
    
//     Node *slo = head, *fast = head;
//     int count = 0;
//     while(slo->next != NULL && fast->next->next != NULL && fast->next != NULL) {
//         slo = slo->next;
//         fast = fast->next->next;
//     }
    
    Node *temp = head;
    int count = 0;
    while(temp->next != NULL) {
        temp = temp->next;
        count++;
    }
    
    if(count&1) {
        count = (count/2) + 1;
    }
    else {
        count = (count/2);
    }
    temp = head;
    for(int i = 0; i < count; ++i) {
        temp = temp->next;
    }

    return temp;
}