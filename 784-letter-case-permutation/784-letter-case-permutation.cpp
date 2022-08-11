class Solution {
public:
    
    void solve(string in, string out, vector<string> &res){
        if(in.size()==0){
            res.push_back(out);
            return;
        }
        
        if(isalpha(in[0])){
            string out1 = out;
            string out2 = out;
            out1.push_back(toupper(in[0]));
            out2.push_back(tolower(in[0]));
            
            in.erase(in.begin()+0);
            
            solve(in, out1, res);
            solve(in, out2, res);
        }
        else{
            string out1 = out;
            out1.push_back(in[0]);
            in.erase(in.begin()+0);
            solve(in, out1, res);
        }
        return;
    }
    
    vector<string> letterCasePermutation(string s) {
        string out = "";
        vector<string> res;
        solve(s, out, res);
        return res;
    }
};