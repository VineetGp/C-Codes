class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string a, b;
        for(string s1: word1){
            a = a + s1;
        }
        for(string s2: word2){
            b = b + s2;
        }
        if(a==b)
            return true;
        else
            return false;
    }
};