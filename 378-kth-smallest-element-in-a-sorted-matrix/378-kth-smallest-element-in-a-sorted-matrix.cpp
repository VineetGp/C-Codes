class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        priority_queue<int, vector<int>, greater<int>> pq;
        for(auto i : matrix){
            for(auto j: i){
                pq.push(j);
            }
        }
        for(int i = 0; i<k-1; i++){
            pq.pop();
        }
        return pq.top();
    }
};