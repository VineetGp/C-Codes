class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        // It is a sliding window problem(variable window)
        int i = 0, j = 0;
        int mx = 0;
        unordered_map<int, int> mp;
        while(j < fruits.size()){
            mp[fruits[j]]++;
            
            if(mp.size()<2){
                mx = max(mx,j-i+1);
                j++;
            }
            
            else if(mp.size() >= 2){
                while(mp.size()>2){
                    mp[fruits[i]]--;
                    if(mp[fruits[i]]==0) mp.erase(fruits[i]);
                    i++;
                }
                if(mp.size()==2){
                    mx = max(mx, j-i+1);
                }
                j++;
            }
        }
        return mx;
    }
};