class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l = 0, h = 0, profit = 0;
        int n = prices.size();
        //if(n==1) return 0;
        while(h < n-1){
            if(prices[h]<prices[h+1]){
                h++;
            }
            else if(prices[h] >= prices[h+1]){
                profit += prices[h] - prices[l];
                h++;
                l = h;
            }
        }
        profit += prices[h] - prices[l];
        return profit;
    }
};