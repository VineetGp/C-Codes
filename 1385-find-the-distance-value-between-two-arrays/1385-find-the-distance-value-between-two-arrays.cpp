/*
Reference:
https://leetcode.com/problems/find-the-distance-value-between-two-arrays/discuss/1299485/C%2B%2B-2-Pointers%3A-Brute-Force%3A-O(N.M)-and-Binary-Search%3A-O(N.logM)
*/

class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int res = arr1.size();
        for(int i: arr1){
            for(int j:arr2){
                if(abs(i-j)<=d){
                    res--;
                    break;
                }
            }
        }
        return res;
    }
};