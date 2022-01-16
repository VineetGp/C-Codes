class Solution {
public:
    bool isValid(string s) {
        stack<char> s1;
        char a;
        bool res = false;
        for(int i = 0; s[i]!='\0'; i++){
            if(s[i]=='{' || s[i]=='[' || s[i]=='('){
                s1.push(s[i]);
            }
            else if(s[i]=='}'){
                if(s1.empty() || s1.top()!='{')
                    return false;
                s1.pop();
                res = true;
            }
            else if(s[i]==']'){
                if(s1.empty() || s1.top()!='[')
                    return false;
                s1.pop();
                res = true;
            }
            else if(s[i]==')'){
                if(s1.empty() || s1.top()!='(')
                    return false;
                s1.pop();
                res = true;
            }
        }
        if(s1.empty()){
            return true;
        }
        else{
            return false;
        }
        return res;
    }
};