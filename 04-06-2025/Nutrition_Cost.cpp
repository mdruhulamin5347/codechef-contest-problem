#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    while (T--) {
        int N, C;
        cin >> N >> C;
        vector<int> A(N), B(N);

        for (int i = 0; i < N; i++) cin >> A[i];
        for (int i = 0; i < N; i++) cin >> B[i];

        unordered_map<int, int> min_cost;
        for (int i = 0; i < N; i++) {
            int vit = A[i];
            int cost = B[i];
            if (min_cost.find(vit) == min_cost.end()) {
                min_cost[vit] = cost;
            } else {
                min_cost[vit] = min(min_cost[vit], cost);
            }
        }

        vector<int> costs;
        for (auto [vit, cost] : min_cost)
            costs.push_back(cost);

        sort(costs.begin(), costs.end());

        int max_val = 0, sum = 0;
        for (int i = 0; i < costs.size(); i++) {
            sum += costs[i];
            int X = i + 1;
            int Y = sum;
            max_val = max(max_val, C * X - Y);
        }

        cout << max_val << "\n";
    }

    return 0;
}
