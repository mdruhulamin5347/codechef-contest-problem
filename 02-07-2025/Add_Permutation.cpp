#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; 
    cin >> t;
    while(t--) {

        int n, k; 
        cin >> n >> k;
        vector<int> v(n);

        for(int i = 0; i < n; ++i){
            v[i] = i + 1;
        }

        if(k < n) {
            reverse(v.begin() + k, v.end());
        }

        for(int x : v) {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}
