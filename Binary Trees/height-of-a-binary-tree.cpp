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

int height(struct Node* node){

    if(!node) {
        return 0;
    }
    
    int x = height(node->left);
    int y = height(node->right);
    
    return (max(x, y) + 1);
}