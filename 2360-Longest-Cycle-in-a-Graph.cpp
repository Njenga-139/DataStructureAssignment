class Solution {
public:
    int longestCycle(vector<int>& edges) {
        int n = edges.size();
        int ans = -1;
        int time = 1;
        vector<int> timeVisited(n, 0);

        for (int i = 0; i < n; ++i) {
            if (timeVisited[i]) continue;
            const int startTime = time;
            int u = i;
            while (u != -1 && !timeVisited[u]) {
                timeVisited[u] = time++;
                u = edges[u];
            }
            if (u != -1 && timeVisited[u] >= startTime) {
                ans = max(ans, time - timeVisited[u]);
            }
        }
        return ans;
    }
};