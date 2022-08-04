class Solution {
public:
    vector<int> nearest_smallest_left_index(vector<int>& heights){
        stack<pair<int,int>> st;
        vector<int> index;
        int pseudo_index = -1;
        for(int i = 0; i<heights.size(); i++){
            if(st.empty()) 
                index.push_back(pseudo_index);
            else if(!st.empty() && st.top().first<heights[i])
                index.push_back(st.top().second);
            else if(!st.empty() && st.top().first>=heights[i]){
                while(!st.empty() && st.top().first>=heights[i])
                    st.pop();
                if(st.empty())
                    index.push_back(pseudo_index);
                else
                    index.push_back(st.top().second);
            }
            st.push({heights[i],i});
        }
        return index;
    }
    
    vector<int> nearest_smallest_right_index(vector<int>& heights){
        stack<pair<int,int>> st;
        vector<int> index;
        int pseudo_index = heights.size();
        for(int i = heights.size()-1; i>=0; i--){
            if(st.empty()) 
                index.push_back(pseudo_index);
            else if(!st.empty() && st.top().first<heights[i])
                index.push_back(st.top().second);
            else if(!st.empty() && st.top().first>=heights[i]){
                while(!st.empty() && st.top().first>=heights[i])
                    st.pop();
                if(st.empty())
                    index.push_back(pseudo_index);
                else
                    index.push_back(st.top().second);
            }
            st.push({heights[i],i});
        }
        reverse(index.begin(), index.end());
        return index;        
    }
    
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        vector<int> right_index(n);
        vector<int> left_index(n);
        vector<int> width(n);
        //vector<int> area(n);
        
        right_index = nearest_smallest_right_index(heights);
        left_index = nearest_smallest_left_index(heights);
        
        int max_area = 0;
        for(int i = 0; i<n; i++){
            width[i] = right_index[i]-left_index[i]-1;
            max_area = max(max_area, width[i]*heights[i]);
        }
        return max_area;
    }
};