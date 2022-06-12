#include<bits/stdc++.h>

using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
}; 

vector<int> reverseLevelOrder(Node *node) {
    vector<int> rlot;
    if(!node) {
        return rlot;
    }

    queue<Node*> kyu;
    kyu.push(node);

    while(!kyu.empty()) {
        Node* temp = kyu.front();
        rlot.push_back(temp->data);
        
        if(temp->right) {
            kyu.push(temp->right);
        }
        
        if(temp->left) {
            kyu.push(temp->left);
        }
        
        kyu.pop();
    }

    reverse(rlot.begin(), rlot.end());

    return rlot;
}