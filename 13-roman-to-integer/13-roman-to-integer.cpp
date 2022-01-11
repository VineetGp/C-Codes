class Solution {
public:
    int romanToInt(string s) {
        int n = s.length();
        int res = 0;
        for(int i = 0; i<n; i++){
            switch(s[i]){
                case 'I':
                    res += 1;
                    break;
                case 'V':
                    res += 5;
                    break;
                case 'X':
                    res += 10;
                    break;
                case 'L':
                    res += 50;
                    break;
                case 'C':
                    res += 100;
                    break;
                case 'D':
                    res += 500;
                    break;
                case 'M':
                    res += 1000;
                    break;
            }
        }
        for(int i = 1; i<n; i++){
            if((s[i]=='V'||s[i]=='X') && s[i-1]=='I'){
                res -= 2;
            }
            if((s[i]=='L'||s[i]=='C') && s[i-1]=='X'){
                res -= 20;
            }
            if((s[i]=='D'||s[i]=='M') && s[i-1]=='C'){
                res -= 200;
            }
        }
        return res;
    }
};