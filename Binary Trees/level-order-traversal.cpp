#include<bits/stdc++.h>

using namespace std;

struct Node {
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};

vector<int> levelOrder(Node* node) {
    vector<int> lot;
    if(!node) {
        return lot;
    }
    
    queue<Node*> kyu;
    kyu.push(node);
    
    while(!kyu.empty()) {
        Node* temp = kyu.front();
        lot.push_back(temp->data);
        
        if(temp->left) {
            kyu.push(temp->left);
        }
        
        if(temp->right) {
            kyu.push(temp->right);
        }
        
        kyu.pop();
    }
    
    return lot;
}