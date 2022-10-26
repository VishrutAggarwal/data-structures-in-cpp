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
    bool isPalindrome(ListNode* head) {
        ListNode* temp;
        int n = 0;
        
        while(temp != NULL) {
            n++;
            temp = temp->next;
        }
        
        int arr[n];
        temp = head;
        
        for(int i = 0; i < n; ++i) {
            arr[i] = temp->val;
            temp = temp->next;
        }
        
        for(int i = 0; i < n; ++i) {
            if(arr[i] != arr[n-i-1]) {
                return false;
            }
        }
        
        return true;
    }
};