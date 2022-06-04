/*
Reference:
https://leetcode.com/problems/find-the-distance-value-between-two-arrays/discuss/1299485/C%2B%2B-2-Pointers%3A-Brute-Force%3A-O(N.M)-and-Binary-Search%3A-O(N.logM)
****** Using binary search ie O(n.log(m)) *******

class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        sort(arr2.begin(), arr2.end());
        int count = 0;
        for(int i = 0; i<arr1.size(); i++){
            bool temp = false;
            int l = 0;
            int r = arr2.size()-1;
            int m = -1;
            while(l<=r){
                m = (l+r)/2;
                if(abs(arr1[i]-arr2[m])<=d){
                    temp = true;
                    break;
                }
                else if(arr2[m]>arr1[i]) r = m-1;
                else l = m+1;
            }
            if(!temp) count++;
        }
        return count;
    }
};
*/
// ****** Using brute force approach that is double for loop *******
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


