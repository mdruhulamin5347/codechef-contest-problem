

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;

    while (t--) {
        int n, c;
        cin >> n >> c;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        int ans = 0;
        while (true) {
            int alice_cookies = c + ans;
            bool all_equal_or_more = true;
            bool someone_less = false;

            for (int i = 0; i < n; i++) {
                if (a[i] == alice_cookies) {
                    all_equal_or_more = false;
                    break;
                }
                if (a[i] < alice_cookies) {
                    someone_less = true;
                }
            }

            if (all_equal_or_more && someone_less) {
                cout << ans << endl;
                break;
            }

            ++ans;
        }
    }
    
    return 0;
}
