class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for(int i = 0; i<image.size(); i++){
            int h1 = image[0].size()-1;
            int j = 0;
            while(j<h1){
                swap(image[i][j], image[i][h1]);
                h1--;
                j++;
            }
        }
        for(int i = 0; i<image.size(); i++){
            for(int j = 0; j<image[0].size(); j++){
                if(image[i][j]==0) image[i][j] = 1;
                else image[i][j] = 0;
            }
        }
        return image;
    }
};