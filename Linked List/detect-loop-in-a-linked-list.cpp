#include<bits/stdc++.h>

using namespace std;

struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

bool detectLoop(Node* head) {
    Node* slo = head;
    Node* fastasfuckboi = head;
    
    while(fastasfuckboi != NULL and fastasfuckboi->next != NULL) {
        fastasfuckboi = fastasfuckboi->next->next;
        slo = slo->next;
        if(fastasfuckboi == slo) {
            return true;
        }
    }
    
    return false;
}