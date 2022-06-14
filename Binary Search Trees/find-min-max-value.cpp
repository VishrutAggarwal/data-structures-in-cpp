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

int minValue(Node* root) {
    if(root == NULL) {
        return -1;
    }
    
    if(root->left == NULL) {
        return root->data;
    }
    
    else {
        return minValue(root->left);
    }
}

int maxValue(Node* root) {
    if(root == NULL) {
        return -1;
    }
    
    if(root->right == NULL) {
        return root->data;
    }
    
    else {
        return minValue(root->right);
    }
}