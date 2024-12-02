#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>

using namespace std;

class Graph {
public:
    unordered_map<string, vector<string>> adjList;

    // Add edge to the graph
    void addEdge(string u, string v) {
        adjList[u].push_back(v);
    }

    // DFS function to count all paths
    void countPaths(string u, string dest, unordered_map<string, bool>& visited, int& count) {
        visited[u] = true;

        if (u == dest) {
            count++;
        } else {
            for (string v : adjList[u]) {
                if (!visited[v]) {
                    countPaths(v, dest, visited, count);
                }
            }
        }

        // Backtrack
        visited[u] = false;
    }

    int findPaths(string start, string end) {
        unordered_map<string, bool> visited;
        for (auto& node : adjList) {
            visited[node.first] = false;
        }

        int count = 0;
        countPaths(start, end, visited, count);
        return count;
    }
};

int main() {
    Graph g;

    // Add edges based on the input graph
    g.addEdge("A", "B");
    g.addEdge("A", "C");
    g.addEdge("B", "E");
    g.addEdge("C", "D");
    g.addEdge("C", "E");
    g.addEdge("D", "E");

    // Count paths between A and E
    cout << "Total paths between A and E are: " << g.findPaths("A", "E") << endl;

    // Count paths between A and C
    cout << "Total paths between A and C are: " << g.findPaths("A", "C") << endl;

    return 0;
}