#include<bits/stdc++.h>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        bool is_Loop = false;
        ListNode* fast = head;
        ListNode* slow = head;
        
        while(fast != NULL and fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
            
            if(fast == slow) {
                is_Loop = true;
                break;
            }
        }
        
        ListNode* checker = head;
        
        while(is_Loop) {
            if(checker == slow) {
                return checker;
            }
            
            slow = slow->next;
            checker = checker->next;
        }
        
        return NULL;
    }
};