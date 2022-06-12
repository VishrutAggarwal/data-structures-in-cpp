#include<bits/stdc++.h>

using namespace std;

struct Node {
    int data;
    struct node* next;

    node(int x) {
        data = x;
        next = NULL;
    }

}*head;

struct node *reverse (struct node *head, int k) { 
    int count = 0;
    
    node* current = head;
    node* pre = NULL;
    node* net;
    
    while(count < k && current != NULL) {
        net = current->next;
        current->next = pre;
        pre = current;
        current = net;
        count++;
    }
    if(net != NULL) {
        head->next = reverse(current, k);
    }

    return pre;
}