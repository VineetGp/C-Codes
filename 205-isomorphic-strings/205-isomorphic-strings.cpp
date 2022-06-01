class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size()!=t.size()) return false;
        // Map for storing each character with its mapping
        // Set is used to check that tha mapped value in t is not 
        // repeated with another character in s
        map<char, char> m;
        set<char> s1;
        for(int i = 0; i<s.size(); i++){
            // if s[i] is in map and the mapped value of s[i] is not equal to t[i], 
            // then return False 
            if(m.find(s[i])!=m.end()){
                if(m[s[i]]!=t[i]) return false;
            }
            // if s[i] not in map, then
            // 1) Check if t[i] is present in set, if yes, then return False because if s[i]                     is not in map, then its mapped t[i] should not be present in set
            // 2) if not present, then put s[i] and t[i] in map and insert t[i] in set so                     that we can know that t[i] is assigned to some s[i] before
            else{
                if(s1.find(t[i])!=s1.end()) return false;
                m[s[i]] = t[i];
                s1.insert(t[i]);
            }
        }
        return true;
    }
};