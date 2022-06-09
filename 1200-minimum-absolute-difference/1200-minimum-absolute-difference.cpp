class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>> res;
        sort(arr.begin(), arr.end());
        int low = INT_MAX;
        for(int i = 0; i<arr.size()-1; i++){
            low = min(arr[i+1]-arr[i], low);
        }
        for(int i = 0; i<arr.size()-1; i++){
            if(arr[i+1]-arr[i]==low){
                vector<int> temp {arr[i], arr[i+1]};
                res.push_back(temp);
            }
        }
        return res;
    }
};