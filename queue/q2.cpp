void bfs(vector<vector<int>>& graph, int start) {
    int n = graph.size();  // Number of nodes in the graph
    vector<bool> visited(n, false);  // To track visited nodes
    queue<int> q;  // Queue to store the nodes for BFS

    // Start with the start node
    visited[start] = true;
    q.push(start);

    while (!q.empty()) {
        // Dequeue the front node from the queue
        int node = q.front();
        q.pop();

        // Print the node
        cout << node << " ";

        // Visit all the neighbors of the current node
        for (int neighbor : graph[node]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                q.push(neighbor);  // Add the unvisited neighbor to the queue
            }
        }
    }
}