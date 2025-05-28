#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }

        sort(v.begin(), v.end());

        int ans = n;

        for(int i = 0; i < n; i++){
            int time = v[i] + (n - i - 1);
            ans = min(ans, time);
        }

        cout << ans << endl;
    }

    return 0;
}