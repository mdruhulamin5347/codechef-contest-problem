

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
        vector<int>v;
        for(int i=0; i<n; i++){
            int x;
            cin >> x;
            v.push_back(x);
        }
        
        sort(v.begin(),v.end());
        long long ans = 1;

        for(int i=0; i<n; i++){
            if(v[i] - i <= 0){
                ans = 0;
                break;
            }
            ans = (ans * (v[i] - i) % 998244353);
        }

        cout << ans << endl;

        
    }
    
    return 0;
}