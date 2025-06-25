


#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int q;
        cin >> q;
        vector<pair<int,int>>v;
        for(int i=0; i<q; i++){
            int x;
            cin >>  x;
            v.push_back({x,i});
        }
        sort(v.begin(),v.end());

        int ans = INT_MAX;
        for(auto [val,idx] : v){
            if(val < idx){
                ans = idx;
            }
            else{
                int result = val + idx;
                ans = min(result,ans);
            }            
        }
        cout << ans << endl;
    }
    
    return 0;
}




#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> v(n+1); 
        for (int i = 1; i <= n; i++) {
            cin >> v[i];
        }

        int ans = v[1];

        for (int i = 2; i <= n; i++) {
            int time = max(v[i] + 1, i - 1);
            ans = min(ans, time);
        }

        cout << ans << endl;
    }

    return 0;
}