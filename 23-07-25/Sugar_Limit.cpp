

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t; 
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n); 
        vector<int> b(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];

        int ans = INT_MIN;

        for (int j = 0; j <= 100; j++) {
            int s = 0;
            for (int i = 0; i < n; ++i) {
                if (b[i] <= j && a[i] > 0) {
                    s += a[i];
                }
            }
            int satisfaction = s - j;
            ans = max(ans, satisfaction);
        }

        cout << ans << endl;
    }

    return 0;
}

