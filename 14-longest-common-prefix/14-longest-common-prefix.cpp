class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        vector<int> len;
        for(int i = 0; i<strs.size(); i++){
            len.push_back(strs[i].length());
        }
        int temp = 0;
        int n;
        n = *min_element(len.begin(), len.end());
        for(int i = 0; i<n; i++){
            for(int j = 0; j<strs.size(); j++){
                if(strs[0][i] != strs[j][i])
                    return strs[0].substr(0,temp);
            }
            temp++;
        }
        return strs[0].substr(0,temp);
    }
};