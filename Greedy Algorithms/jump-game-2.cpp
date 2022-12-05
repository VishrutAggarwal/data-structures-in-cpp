#include<bits/stdc++.h>

using namespace std;

class Solution{
  public:
    int minJumps(int arr[], int n){
        int l = 0, r = 0, ans = 0;
        
        while(r < n - 1 && l <= r) {
            int farthest = 0;
            
            for(int i = l; i <= r; ++i) {
                farthest = max(farthest, i + arr[i]);
            }
            
            l = r + 1;
            r = farthest;
            ans++;
        }
        
        if(l > r) {
            return -1;
        }
        
        return ans;
    }
};