class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int n = 0;

        for(int i = 0; i< edges.size(); i++){
            n = max(n,max(edges[i][0], edges[i][1]));
        }
        vector<int> indegree(n+1);
        for(int i = 0; i<edges.size();i++){
            indegree[edges[i][0]]++;
            indegree[edges[i][1]]++;
        }
        int result;
        for(int i = 0; i<indegree.size(); i++){
            if(indegree[i] == n-1){
                result =i;
                break;
            }
        }
        return result;
    }
};