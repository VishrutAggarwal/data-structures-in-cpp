#include<bits/stdc++.h>

using namespace std;

struct Node {
    int data;
    Node* next;
    
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

void removeLoop(Node* head) {
    bool isLoop = true;
    if(isLoop) {
    
        unordered_map<Node*, int> mup;
        mup[head]++;
        
        while(head) {
            mup[head->next]++;
            if(mup[head->next] > 1) {
                head->next = NULL;
                break;
            }
            head = head->next;
        }
    }
}