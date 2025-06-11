#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> a(n), b(n);
        
        for (int i = 0; i < n; ++i)
            cin >> a[i];

        for (int i = 0; i < n; ++i)
            cin >> b[i];
        
        vector<int> max_v(n);
        max_v[n - 1] = a[n - 1];

        for (int i = n - 2; i >= 0; --i)
            max_v[i] = max(a[i], max_v[i + 1]);

        
        int count = 0;
        bool fail = false;
        for (int i = 0; i < n; ++i) {
            if (x < a[i]) {
                fail = true;
                break;
            }
            if (x >= b[i]) {
                int mx;
                if (i + 1 < n) {
                    mx = max_v[i + 1];
                } else {
                    mx = 0;
                }

                if (x - 1 >= mx) {
                    x--;
                    count++;
                }
            }
        }

        if (fail)
            cout << "0" << endl;
        else
            cout << count << endl;
    }

    return 0;
}
