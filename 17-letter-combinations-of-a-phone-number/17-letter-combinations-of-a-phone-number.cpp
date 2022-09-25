class Solution {
public:
    vector<string> solve(vector<string> codes, string digits){
        if(digits.size()==0){
            return {""};
        }
        
        char s1 = digits[0];
        string s2 = digits.substr(1);
        vector<string> rec_res = solve(codes, s2);
        vector<string> my_res;
        int n = s1 - '0' - 2;
        string codeForCheck = codes[n];
        for(int i = 0; i<codeForCheck.size(); i++){
            for(auto str : rec_res){
                my_res.push_back(codeForCheck[i] + str);
            }
        }
        return my_res;
    }
    vector<string> letterCombinations(string digits) {
        if(digits == "") return {};
        vector<string> v = {"abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        vector<string> res = solve(v, digits);
        return res;
    }
};