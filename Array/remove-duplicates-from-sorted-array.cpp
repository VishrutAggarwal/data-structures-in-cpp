#include<bits/stdc++.h>

using namespace std;

int removeDuplicates(vector<int>& nums) {
    int k = 1, uniqueVal = nums[0];
    
    for(int i = 1; i < nums.size(); ++i) {
        if(nums[i] != uniqueVal) {
            uniqueVal = nums[i];
            nums[k] = uniqueVal;
            k++;
        }
    }
    
    return k;
}