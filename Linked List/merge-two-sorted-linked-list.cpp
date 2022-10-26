#include<bits/stdc++.h>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* sol = new ListNode();
        ListNode* temp = sol;
        ListNode* ptr1 = list1;
        ListNode* ptr2 = list2;
        
        while(ptr1 != NULL && ptr2 != NULL) {
            if(ptr1->val < ptr2->val) {
                temp->next = ptr1;
                ptr1 = ptr1->next;
                temp = temp->next;
            }
            
            else if(ptr1->val >= ptr2->val) {
                temp->next = ptr2;
                ptr2 = ptr2->next;
                temp = temp->next;
            }
        }
        
        if(ptr1 == NULL) {
            temp->next = ptr2;
        }
        
        else if(ptr2 == NULL) {
            temp->next = ptr1;
        }
        
        temp = temp->next;
        
        return sol->next;
    }
};