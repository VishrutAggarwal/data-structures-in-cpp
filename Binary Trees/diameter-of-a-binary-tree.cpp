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

int ma = 0;

int func(Node* node) {
        if(!node) {
        return 0;
    }
    
    int x = func(node->left);
    int y = func(node->right);
    
    ma = max(ma, x + y + 1);
    
    return (max(x, y) + 1);
}

int diameter(Node* node) {

    func(node);
    
    return ma;
}