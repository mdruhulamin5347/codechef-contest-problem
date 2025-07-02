
#include <bits/stdc++.h>
using namespace std;
int find_centroid(int node, int parent, int total_size);
void bfs_label(int centroid);

int main() {
    int T; cin >> T;
    while (T--) {
        int N; cin >> N;
        vector<vector<int>> adj(N+1);
        for (int i = 0; i < N-1; i++) {
            int u,v; cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        // find centroid
        int centroid = find_centroid(1, -1, N);

        // assign labels by BFS distance from centroid
        vector<int> label(N+1, -1);
        queue<int> q;
        label[centroid] = 0;
        q.push(centroid);
        while(!q.empty()) {
            int u = q.front(); q.pop();
            for(auto nxt : adj[u]) {
                if(label[nxt] == -1) {
                    label[nxt] = label[u] + 1;
                    q.push(nxt);
                }
            }
        }

        // compute score by formula or simulate
        long long score = 0;
        // Efficient calculation needed, usually using properties of tree and labels

        cout << score << "\n";
    }
}