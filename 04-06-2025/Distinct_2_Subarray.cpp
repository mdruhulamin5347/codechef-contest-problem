
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; ++i)
            cin >> v[i];
      
        int ans = INT_MAX;
        
        for (int i = 0; i < n; i++) {
            set<int> s;
            for (int j = i; j < n; j++) {
                s.insert(v[j]);
                if (s.size() > 2) 
                    break;
                if (s.size() == 2) {
                    ans = min(ans, j - i + 1);
                    break; 
                }
            }
        }

        if(ans == INT_MAX)
            cout << -1 << endl;
        else 
            cout << ans << endl;

    }

    return 0;
}
