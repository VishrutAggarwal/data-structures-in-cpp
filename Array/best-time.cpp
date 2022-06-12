#include<bits/stdc++.h>

using namespace std;

int maxProfit(vector<int>& prices) {
    int maxProf = 0, currentSmallest = *max_element(prices.begin(), prices.end()), todayProfit = 0;
    
    for(int i = 0; i < prices.size(); ++i) {
        if(prices[i] < currentSmallest){
            currentSmallest = prices[i];
        }
        todayProfit = prices[i] - currentSmallest;
        if(maxProf < todayProfit) {
            maxProf = todayProfit;
        }
    }
    return maxProf;
}