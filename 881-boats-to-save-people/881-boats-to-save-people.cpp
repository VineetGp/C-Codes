class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int res = 0;
        int start = 0;
        int end = people.size()-1;
        while(start<=end){
            res++;
            if(people[start]+people[end]<=limit)
                start++;
            end--;
        }
        return res;
    }
};