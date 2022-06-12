#include<bits/stdc++.h>

using namespace std;

struct Node {
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

struct Node* reverseList(struct Node *head) {
    Node* current = head;
    Node* previous = NULL;
    Node* next;
    
    while(current != NULL) {
        next = current->next;
        current->next = previous;
        previous = current;
        current = next;
    }
    return previous;
}