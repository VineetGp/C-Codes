class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        priority_queue<pair<int, int> > pq;
        vector<int> ans;
        for(int i{0};i<arr.size();i++){
            pq.push(make_pair(abs(arr.at(i)-x),arr.at(i)));
            if(pq.size()>k){
                pq.pop();
            }
        }
        while(!pq.empty()){
            pair<int, int> pot = pq.top();
            ans.push_back(pot.second);
            pq.pop();
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};