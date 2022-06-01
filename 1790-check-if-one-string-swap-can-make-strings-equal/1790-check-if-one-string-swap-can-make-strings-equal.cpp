class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if(s1.size()!=s2.size()) return false;
        int idx1 = -1, idx2 = -1;
        int diff = 0;
        for(int i = 0; i<s1.size(); i++){
            if(s1[i]!=s2[i]){
                diff++;
                if(idx1 == -1) idx1 = i;
                else idx2 = i;
            }
            if(diff>2) return false;
        }
        return diff == 0 || (diff==2 && s1[idx1] == s2[idx2] && s1[idx2] == s2[idx1]);
    }
};