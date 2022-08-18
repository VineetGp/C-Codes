class Solution {
public:
    int minSetSize(vector<int>& arr) {
        map<int,int> mp;
        for(auto i : arr){
            mp[i]++;
        }
        priority_queue<int> pq;
        int sum = 0;
        int res = 0;
        int n;
        int N = arr.size();
        if(N%2==0) n = N/2;
        else n = N/2 + 1;
        for(auto it : mp){
            pq.push(it.second);
        }
        while(!pq.empty()){
            sum += pq.top();
            res++;
            if(sum >= n) return res;
            pq.pop();
        }
        return res;
    }
};