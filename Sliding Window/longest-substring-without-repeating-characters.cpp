#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        vector<int> auxi(128, -1);

        int ans = 0, initPos = 0;

        for(int finPos = 0; finPos < s.length(); ++finPos) {
            if(auxi[s[finPos]] >= 0) {
                for(int i = initPos; i <= auxi[s[finPos]]; ++i) {
                    auxi[s[i]] = -1;
                    initPos = i;
                }
                initPos++;
            }
            auxi[s[finPos]] = finPos;
            ans = max(ans, finPos - initPos + 1);
        }
        return ans;
    }
};