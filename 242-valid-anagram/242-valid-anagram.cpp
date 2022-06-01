class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        map<char, int> m;
        for(auto i : s){
            m[i]++;
        }
        for(auto i : t){
            m[i]--;
        }
        for(auto &it : m){
            if(it.second!=0) return false;
        }
        return true;
    }
};