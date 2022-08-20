class Solution {
public:
    string minWindow(string s, string t) {
        int i = 0, j = 0;
        unordered_map<char,int> mp;
        for(auto i : t) mp[i]++;
        int count = mp.size();
        int mn = INT_MAX;
        int i_res = 0, j_res = 0;
        while(j < s.size()){
            if(mp.find(s[j])!=mp.end()){
                mp[s[j]]--;
                if(mp[s[j]]==0) count--;
            }
            if(count > 0) j++;
            else if(count == 0){
                if(mn > j-i+1){
                    mn = j-i+1;
                    i_res = i;
                    j_res = j;
                }
                
                while(count==0){
                    if(mp.find(s[i])==mp.end()){
                        i++;
                        if(mn > j-i+1){
                            mn = j-i+1;
                            i_res = i;
                            j_res = j;
                        }
                    }
                    else{
                        mp[s[i]]++;
                        if(mp[s[i]]==1){
                            i++;
                            count++;
                        }
                        else{
                            i++;
                            if(mn > j-i+1){
                                mn = j-i+1;
                                i_res = i;
                                j_res = j;
                            }                            
                        }
                    }
                }
                j++;
            }
        }
        string res = "";
        if(mn==INT_MAX) return res;
        
        for(int i = i_res; i<=j_res; i++){
            res += s[i];
        }
        return res;
    }
};