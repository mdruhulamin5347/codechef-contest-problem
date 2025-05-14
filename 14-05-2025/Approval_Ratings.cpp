#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        vector<int> a(5);
        int total = 0;
        for (int i = 0; i < 5; i++) {
            cin >> a[i];
            total += a[i];
        }

        int required = 35;
        if (total >= required) {
            cout << 0 << endl;
            continue;
        }

        sort(a.begin(), a.end());

        int ans = 0;
        int i = 0;
        while(total < required){
            total += (10 - a[i]);
            ans++;
            i++;
        }

        cout << ans * 100 << endl;
    }

    return 0;
}
