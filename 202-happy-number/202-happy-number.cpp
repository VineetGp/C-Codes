class Solution {
public:
    int sum_squared(int num){
        int digit; 
        int sum=0;
        while(num){
            digit = num%10;
            num = num/10;
            sum += (digit*digit);
        }
        return sum;
    }
    bool isHappy(int n) {
        set<int> s;
        while(1){
            n = sum_squared(n);
            if(n==1)
                return true;
            if(s.find(n)!=s.end())
                return false;
            s.insert(n);
        }
        return false;
    }
};