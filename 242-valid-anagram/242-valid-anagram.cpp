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

// OR USING ARRAY

/*
class Solution {
public:
    bool isAnagram(string s, string t) {
        int freq[26] = {0};
        for(int i=0;i<s.size();i++) freq[s[i]-'a']++;
        for(int i=0;i<t.size();i++) freq[t[i]-'a']--;
        for(int i=0;i<26;i++)
        {
            if(freq[i]!=0) return false;
        }
        return true;
    }
};
*/