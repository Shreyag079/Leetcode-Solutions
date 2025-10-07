class Solution {
public:
    int swimInWater(vector<vector<int>>& grid) 
    {
        int n = grid.size();
        vector<vector<int>> directions = {{1,0}, {-1,0}, {0,1}, {0,-1}};
        vector<vector<bool>> visited(n, vector<bool>(n, false));
        
       
        priority_queue<vector<int>, vector<vector<int>>, greater<>> pq;
        pq.push({grid[0][0], 0, 0});
        visited[0][0] = true;
        
        int time = 0;
        
        while (!pq.empty()) 
        {
            auto cur = pq.top(); pq.pop();
            int t = cur[0], r = cur[1], c = cur[2];
            time = max(time, t);
            
            if (r == n - 1 && c == n - 1) 
               return time;
            
            for (auto& d : directions) 
            {
                int nr = r + d[0], nc = c + d[1];
                if (nr >= 0 && nr < n && nc >= 0 && nc < n && !visited[nr][nc]) 
                {
                    visited[nr][nc] = true;
                    pq.push({grid[nr][nc], nr, nc});
                }
            }
        }
        return -1; 
    }
};