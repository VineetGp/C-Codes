class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        priority_queue<pair<int, int>> pq;
        int gap;
        for(int i = 0; i<k; i++){
            gap = abs(arr[i] -  x);
            pq.push({gap, arr[i]});
        }
        for(int i = k; i<arr.size(); i++){
            gap = abs(arr[i] - x);
            if((pq.top().first == gap && pq.top().second > arr[i]) || pq.top().first > gap){
                pq.pop();
                pq.push({gap,arr[i]});
            }
        }
        vector<int> res;
        while(!pq.empty()){
            res.push_back(pq.top().second);
            pq.pop();
        }
        sort(res.begin(), res.end());
        return res;
    }
};