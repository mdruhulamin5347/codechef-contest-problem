

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
        multiset<pair<int,int>> ml;
        for(int i=0; i<n; i++){
            int a,b;
            cin >> a >> b;
            ml.insert({b,a});
        }

        int ans = INT_MAX;
        for(auto val : ml){
            if(val.second <= 10 && val.second >= 7){
                ans = min(ans, val.first);
            }
        }
        if(ans == INT_MAX)
            cout << -1 << endl;
        else
            cout << ans << endl;
    }
    
    return 0;
}