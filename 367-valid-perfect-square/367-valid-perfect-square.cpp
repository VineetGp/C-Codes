class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num==1) return true;
        int l = 0;
        int h = num/2;
        int m;
        while(l<=h){
            m = (l+h)/2;
            if(pow(m,2) == num) return true;
            else if(pow(m,2)<num) l = m+1;
            else h = m-1;
        }
        return false;
    }
};