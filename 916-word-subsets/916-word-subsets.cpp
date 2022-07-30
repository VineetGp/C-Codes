class Solution {
public:
    vector<int> getFreq(string &s){
        vector<int> f(26);
        for(auto i : s){
            f[i-'a']++;
        }
        return f;
    }
    
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        vector<vector<int>> freq(words2.size(), vector<int> (26));
        for(int i = 0; i<words2.size(); i++){
            freq[i] = getFreq(words2[i]);
        }
        
        vector<int> maxFreq(26);
        for(int i = 'a'; i<='z'; i++){
            int mx = 0;
            for(int j = 0; j<words2.size(); j++){
                mx = max(mx, freq[j][i-'a']);
            }
            maxFreq[i-'a'] = mx;
        }
        
        vector<string> res;
        for(int i = 0; i<words1.size(); i++){
            vector<int> temp = getFreq(words1[i]);
            int alarm = 0;
            for(int j = 0; j<26; j++){
                if(maxFreq[j]>temp[j]){
                    alarm = 1;
                    break;
                }
            }
            if(!alarm) res.push_back(words1[i]);
        }
        return res;
    }
};