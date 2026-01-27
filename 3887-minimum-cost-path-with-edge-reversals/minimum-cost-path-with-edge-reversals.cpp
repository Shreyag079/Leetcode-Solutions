class Solution {
public:
    int minCost(int n, vector<vector<int>>& edges) 
    {
        vector<vector<pair<int,int>>> adj(n);

       
        for (auto &e : edges) 
        {
            int u = e[0], v = e[1], w = e[2];
            adj[u].push_back({v, w});       
            adj[v].push_back({u, 2 * w});   
        }

        vector<long long> dist(n, LLONG_MAX);
        priority_queue<pair<long long,int>,
                       vector<pair<long long,int>>,
                       greater<>> pq;

        dist[0] = 0;
        pq.push({0, 0});

        while (!pq.empty()) 
        {
            auto [cost, node] = pq.top();
            pq.pop();

            if (cost > dist[node]) continue;

            for (auto [next, w] : adj[node]) 
            {
                if (dist[next] > cost + w) 
                {
                    dist[next] = cost + w;
                    pq.push({dist[next], next});
                }
            }
        }

        return dist[n-1] == LLONG_MAX ? -1 : dist[n-1];
    }
};
