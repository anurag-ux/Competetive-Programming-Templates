class Solution {
public:
    int dfs(vector<vector<int>>& grid,int x,int y,int id)
    {
        if(x<0 || y<0 || x>=grid.size() || y>=grid[0].size() || grid[x][y]!=1)
        {
            return 0;
        }
        grid[x][y]=id;
        int a=dfs(grid,x+1,y,id);
        int b=dfs(grid,x-1,y,id);
        int c=dfs(grid,x,y+1,id);
        int d=dfs(grid,x,y-1,id);
        return 1+a+b+c+d;
    }
    int largestIsland(vector<vector<int>>& grid) {
        
        int n=grid.size();
        int m=grid[0].size();
        int ans=INT_MIN;
        int id=2;
        map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1)
                {
                    int cnt=dfs(grid,i,j,id);
                    mp[id]=cnt;
                    id++;
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==0)
                {
                    int val=1;
                    set<int> st;
                    i-1>=0?st.insert(grid[i-1][j]):st.insert(0);
                    i+1<n?st.insert(grid[i+1][j]):st.insert(0);
                    j-1>=0?st.insert(grid[i][j-1]):st.insert(0);
                    j+1<m?st.insert(grid[i][j+1]):st.insert(0);
                    for(auto x:st)
                    {
                        val+=mp[x];
                    }
                    ans=max(val,ans);
                }
            }
        }
        return ans==INT_MIN?n*m:ans;
    }
};