class Solution {
public:
    bool buddyStrings(string s, string goal) {
        if(s.size()!=goal.size()) return false;
        
        set<char> s1(s.begin(),s.end());
        if(s==goal && s1.size()<s.size()) return true;
        
        vector<int> diff;
        for(int i = 0; i<s.size(); i++){
            if(s[i]!=goal[i]) diff.push_back(i);
        }
        
        if(diff.size()==2 && s[diff[0]]==goal[diff[1]] && s[diff[1]]==goal[diff[0]]) return true;
        else return false;
    }
};