class Solution {
public:
    bool issafe(int x,int y,int n,int m)
    {
        return x>=0 && y>=0 && x<n && y<m;
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        queue<pair<int,int>> q;
        int n=image.size();
        int m=image[0].size();
        q.push({sr,sc});
        int dx[4]={0,0,1,-1};
        int dy[4]={1,-1,0,0};
        while (!q.empty())
        {
            pair<int,int> p=q.front();
            q.pop();
            int color=image[p.first][p.second];
            // -new color done for checking if visited this block
            image[p.first][p.second]=-newColor;
            for (int i=0;i<4;i++)
            {
                if (issafe(p.first+dx[i],p.second+dy[i],n,m) && image[p.first+dx[i]][p.second+dy[i]]==color && image[p.first+dx[i]][p.second+dy[i]]!=-newColor)
                {
                    q.push({p.first+dx[i],p.second+dy[i]});
                }
            }
        }
        for (int i=0;i<n;i++)
        {
            for (int j=0;j<m;j++)
            {
                image[i][j]=abs(image[i][j]);
            }
        }
        return image;
    }
};