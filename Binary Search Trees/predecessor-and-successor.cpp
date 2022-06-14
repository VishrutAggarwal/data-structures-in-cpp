#include<bits/stdc++.h>

using namespace std;

struct Node
{
	int key;
	struct Node *left, *right;
};

Node* inPre(Node* root) {
    Node* p = root->left;
    while(p->right) {
        p = p->right;
    }
    return p;
}

Node* inSuc(Node* root) {
    Node* p = root->right;
    while(p->left) {
        p = p->left;
    }
    return p;
}

// This function finds predecessor and successor of key in BST.
// It sets pre and suc as predecessor and successor respectively
void findPreSuc(Node* root, Node*& pre, Node*& suc, int key) {
    if(!root) return;
    if(root->key == key) {
        if(root->left) {
            pre = inPre(root);
        }
        if(root->right) {
            suc = inSuc(root);
        }
    }
    
    if(root->key < key) {
        pre = root;
        findPreSuc(root->right, pre, suc, key);
    }
    
    else if(root->key > key) {
        suc = root;
        findPreSuc(root->left, pre, suc, key);
    }
}