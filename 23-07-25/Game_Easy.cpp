#include <bits/stdc++.h>
using namespace std;

const int MAXN = 2005;
const int INF = -1e9;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N+1);
        for (int i = 1; i <= N; ++i) {
            cin >> A[i];
        }

        int maxK = 2 * N;
        vector<vector<int>> dp(maxK + 1, vector<int>(N + 1, INF));
        dp[0][0] = 0;

        for (int i = 1; i <= N; ++i) {
            vector<vector<int>> ndp(maxK + 1, vector<int>(N + 1, INF));
            for (int k = 0; k <= maxK; ++k) {
                for (int x = 0; x <= N; ++x) {
                    if (dp[k][x] == INF) continue;

                    ndp[k][x] = max(ndp[k][x], dp[k][x]);

                    if (k + 1 <= maxK)
                        ndp[k + 1][x + 1] = max(ndp[k + 1][x + 1], dp[k][x] + A[i]);

                    if (k + 2 <= maxK)
                        ndp[k + 2][x + 1] = max(ndp[k + 2][x + 1], dp[k][x] + A[i] + x);
                }
            }
            dp = ndp;
        }

        for (int k = 1; k <= maxK; ++k) {
            int ans = 0;
            for (int x = 0; x <= N; ++x) {
                ans = max(ans, dp[k][x]);
            }
            cout << ans << " ";
        }
        cout << endl;
    }

    return 0;
}