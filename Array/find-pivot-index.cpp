#include<bits/stdc++.h>

using namespace std;

int pivotIndex(vector<int>& nums) {
    int runSum = 0, totalSum = accumulate(nums.begin(), nums.end(), 0);;
    
    for(int i = 0; i < nums.size(); ++i) {
        if(runSum == totalSum - nums[i] - runSum){
            return i;
        }
        runSum += nums[i];
    }
    
    return -1;
}