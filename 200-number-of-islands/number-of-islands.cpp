class Solution {
public:
    void bfs(int r, int c, vector<vector<char>>& grid, int m, int n) 
    {
        queue<pair<int,int>> q;
        q.push({r, c});
        grid[r][c] = '0';   

        vector<pair<int,int>> dir = {{1,0},{-1,0},{0,1},{0,-1}};

        while (!q.empty()) 
        {
            auto [row, col] = q.front();
            q.pop();

            for (auto [dr, dc] : dir) 
            {
                int nr = row + dr;
                int nc = col + dc;

                if (nr >= 0 && nc >= 0 && nr < m && nc < n && grid[nr][nc] == '1') 
                {
                    grid[nr][nc] = '0';
                    q.push({nr, nc});
                }
            }
        }
    }
    
    int numIslands(vector<vector<char>>& grid) 
    {
        int m=grid.size();
        int n=grid[0].size();
        int ans=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]=='1')
                {
                    bfs(i,j,grid,m,n);
                    ans+=1;
                }
            }
        }

        return ans;
    }
};