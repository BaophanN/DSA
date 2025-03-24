bool isBipartite(vector<vector<int>>& graph) {
    int n = graph.size();  // Number of nodes in the graph
    vector<int> color(n, -1);  // -1 indicates uncolored, 0 and 1 are the two colors
    
    for (int i = 0; i < n; ++i) {
        // If the node is uncolored, start BFS from it
        if (color[i] == -1) {
            queue<int> q;
            q.push(i);
            color[i] = 0;  // Assign an arbitrary color (0)

            while (!q.empty()) {
                int node = q.front();
                q.pop();

                // Check all the neighbors of the current node
                for (int neighbor : graph[node]) {
                    if (color[neighbor] == -1) {
                        // If the neighbor is uncolored, assign it the opposite color
                        color[neighbor] = 1 - color[node];
                        q.push(neighbor);
                    } else if (color[neighbor] == color[node]) {
                        // If the neighbor has the same color, it's not bipartite
                        return false;
                    }
                }
            }
        }
    }
    
    return true;  // If no conflicts were found, the graph is bipartite
}