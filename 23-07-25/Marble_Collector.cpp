

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        set<int> collected;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            collected.insert(x);
        }

        int notCollected = m - collected.size();
        cout << notCollected << endl;
    }

    return 0;
}