#include<bits/stdc++.h>

using namespace std;

vector<int> runningSum(vector<int>& nums) {
    vector<int> runSumMore;
    int fatty = 0;
    
    for(int i = 0; i < nums.size(); ++i) {
        fatty += nums[i];
        runSumMore.push_back(fatty);
    }
    
    return runSumMore;
}