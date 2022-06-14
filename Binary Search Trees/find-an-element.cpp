#include<bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};

bool search(Node* root, int x) {
    
    if(root == NULL) {
        return false;
    }
    
    if(root->data == x) {
        return true;
    }
    
    if(root->data > x) {
        return search(root->left, x);
    }
    
    else {
        return search(root->right, x);
    }
}