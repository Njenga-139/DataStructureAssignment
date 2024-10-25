class Solution {
public:
    int ans = 0;

    void dfs(int src, int currTime, int currValue, int mxT, vector<int>& value, vector<pair<int, int>> adj[]) {
        if (currTime > mxT) return;
        currValue += value[src];
        if (src == 0) {
            ans = max(ans, currValue);
        }
        int temp = value[src];
        value[src] = 0;
        for (auto x : adj[src]) {
            dfs(x.first, currTime + x.second, currValue, mxT, value, adj);
        }
        value[src] = temp;
    }

    int maximalPathQuality(vector<int>& values, vector<vector<int>>& edges, int maxTime) {
        int n = values.size();
        vector<pair<int, int>> adj[n];
        for (auto e : edges) {
            adj[e[0]].push_back({e[1], e[2]});
            adj[e[1]].push_back({e[0], e[2]});
        }
        dfs(0, 0, 0, maxTime, values, adj);
        return ans;
    }
};
