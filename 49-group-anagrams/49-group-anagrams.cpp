class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        unordered_map<string, vector<int>> m;
        int i = 0;
        for(auto str: strs){
            sort(str.begin(), str.end());
            m[str].push_back(i);
            i++;
        }
        for(auto it:m){
            vector<string> temp;
            for(auto index: it.second){
                temp.push_back(strs[index]);
            }
            res.push_back(temp);
        }
        return res;
    }
};