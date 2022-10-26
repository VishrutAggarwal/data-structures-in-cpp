#include <bits/stdc++.h> 

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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* slow = head;
        ListNode* fast = head;
        int count = 0;
        ListNode* checker = head;
        
        while(checker != NULL) {
            count++;
            checker = checker->next;
        }
        if(count == 0) {
            return NULL;
        }

        for(int i = 0; i < k%(count); ++i) {
            fast = fast->next;
        }
        
        while(fast->next != NULL) {
            slow = slow->next;
            fast = fast->next;
        }
        
        fast->next = head;
        ListNode* temp = slow->next;
        slow->next = NULL;
        
        return temp;
    }
};