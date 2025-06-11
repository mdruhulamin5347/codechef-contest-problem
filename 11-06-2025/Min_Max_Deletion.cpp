

#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int n, q;
        cin >> n >> q;
        vector<int> v(n + 1); 
        for(int i = 1; i<=n; i++){
            cin >> v[i];
        }

        long long ans = 0;
        for(int i = 1; i<n; i++){
            ans += min(v[i], v[i + 1]);
        }

        while(q--){
            int r,s;
            cin >> r >> s;

            if(r > 1){
                ans -= min(v[r - 1], v[r]);
            }
            if(r < n){
                ans -= min(v[r], v[r + 1]);
            }


            v[r] = s;

            if(r > 1){
                ans += min(v[r - 1], v[r]);
            }
            if(r < n){
                ans += min(v[r], v[r + 1]);
            }

            cout << ans << endl;
        }
    }
    
    return 0;
}
