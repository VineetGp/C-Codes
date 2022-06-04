class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        vector<int> diff;
        int count = 0;
        for(int i = 0; i<rocks.size(); i++){
            diff.push_back(capacity[i]-rocks[i]);
        }
        sort(diff.begin(), diff.end());
        for(int i = 0; i<diff.size(); i++){
            if(diff[i]==0) count++;
            
            else if(additionalRocks-diff[i]>=0){
                additionalRocks -= diff[i];
                count++;
            }
            
            else break;
        }
        return count;
    }
};