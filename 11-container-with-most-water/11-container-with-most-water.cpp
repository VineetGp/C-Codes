class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0, j = height.size()-1;
        int h;
        int water = 0;
        while(i<j){
            h = min(height[i],height[j]);
            water = max(water, (j-i)*h);
            if(height[i]<height[j]) i++;
            else j--;
        }
        return water;
    }
};