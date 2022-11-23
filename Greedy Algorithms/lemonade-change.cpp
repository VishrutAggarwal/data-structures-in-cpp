#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {

        unordered_map<int, int> helper;

        for(int i = 0; i < bills.size(); ++i) {

            helper[bills[i]]++;

            if(bills[i] == 10) {
                if(helper[5] == 0) {
                    return false;
                }
                else helper[5]--;
            }

            if(bills[i] == 20) {
                if((helper[5] == 0 || helper[10] == 0) && helper[5] < 3) {
                    return false;
                }
                else {
                    if(helper[10] > 0) {
                        helper[5]--;
                        helper[10]--;
                    }

                    else {
                        helper[5] -= 3;
                    }
                }
            }
        }

        return true;
    }
};