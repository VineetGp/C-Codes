class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int l = getMax(weights);
        int h = getSum(weights);
        while(l<h){
            int max_capacity = (l+h)/2;  // we are assuming max_capacity 
            int capacity = 0, required_days = 1;
            for(int weight : weights){
                if(capacity + weight <= max_capacity){
                    capacity += weight;
                }
                else{
                    required_days++;
                    capacity = weight;
                }
            }
            if(required_days<=days){
                h = max_capacity;
            }
            else{
                l = max_capacity + 1;
            }
        }
        return l;
    }
    
    int getSum(vector<int> &weights){
        int sum = 0;
        for(int i : weights){
            sum+=i;
        }
        return sum;
    }
    int getMax(vector<int> &weights){
        int m = INT_MIN;
        for(int i: weights){
            m = max(i,m);
        }
        return m;
    }
};