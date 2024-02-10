#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int INF = 1e9;

int tsp(vector<vector<int>>& graph, vector<int>& path, vector<bool>& visited, int current, int n, int cost) {
    if (path.size() == n) {
        return cost + graph[current][0]; // Return to starting point
    }

    int minCost = INF;
    for (int i = 0; i < n; ++i) {
        if (!visited[i]) {
            visited[i] = true;
            path.push_back(i);
            minCost = min(minCost, tsp(graph, path, visited, i, n, cost + graph[current][i]));
            path.pop_back();
            visited[i] = false;
        }
    }

    return minCost;
}

int main() {
    int n;
    cout << "Enter the number of cities: ";
    cin >> n;

    vector<vector<int>> graph(n, vector<int>(n));
    cout << "Enter the adjacency matrix for the graph:\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> graph[i][j];
        }
    }

    vector<int> path;
    vector<bool> visited(n, false);
    visited[0] = true; // Starting from the first city

    int minCost = tsp(graph, path, visited, 0, n, 0);
    cout << "Minimum cost of the tour: " << minCost << endl;

    return 0;
}
