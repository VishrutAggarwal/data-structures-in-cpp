#include<bits/stdc++.h>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_map<ListNode*, int> hash;
        while(headA != NULL) {
            
            hash[headA]++;
            
            headA = headA->next;
        }
        
        while(hash[headB] == 0 && headB != NULL) {
            headB = headB->next;
        }
        
        return headB;
    }
};