#include <bits/stdc++.h> 

using namespace std;

template <typename T>
class LinkedListNode {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data) {
            this->data = data;
            this->next = NULL;
        }
};

void deleteNode(LinkedListNode<int> * node) {
    node->data = node->next->data;
    node->next = node->next->next;
}
