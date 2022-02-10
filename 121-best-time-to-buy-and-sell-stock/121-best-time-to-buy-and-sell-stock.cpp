class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int low = prices[0];
        for(int price: prices){
            if(price<low)
                low = price;
            if(price-low>profit)
                profit = price-low;
        }
        return profit;
    }
};