class Solution {
public:
    int fib(int n) {
        if(n==0) return 0;
        if(n==1) return 1;
        vector<int> temp(n+1,0);
        temp[0] = 0;
        temp[1] = 1;
        for(int i = 1; i<n; i++){
            temp[i+1] = temp[i] + temp[i-1];
        }
        return temp[n];
    }
};