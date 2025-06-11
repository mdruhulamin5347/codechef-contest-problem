#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; 
    cin >> t;
    while (t--) {
        int n; 
        string s;
        cin >> n >> s;

        vector<bool> v(n, false);
        bool possible = true;

        for (int i = 0; i < n;) {
            if (v[i]) {
                i++;
                continue;
            }

            if (s[i] == '1') {
                v[i] = true;
                if (i + 1 < n)
                    v[i + 1] = true;
                i += 2;
            } 
            else if (i + 1 < n && s[i + 1] == '1') {
                v[i] = true;
                v[i + 1] = true;
                i += 2;
            } 
            else {
                possible = false;
                break;
            }
        }

        if (possible) {
            for (bool val : v) {
                if (!val) {
                    possible = false;
                    break;
                }
            }
        }

        if (possible)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}
