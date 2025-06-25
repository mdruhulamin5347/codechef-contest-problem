

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
        vector<int>v(n);
        
        int cnt_1 = 0;
        int cnt_2 = 0;
        for(int i=0; i<n; i++){
            cin >> v[i];
            if(v[i] == 1){
                cnt_1++;
            }
            else{
                cnt_2++;
            }
        }
        
        int ans = 0;
        if(cnt_1 > 0 && cnt_2 > 0){
            if(cnt_1 % 2 == 0){
                ans = min(cnt_1 / 2, cnt_2);
            } else {
                ans = cnt_2;
            }
        }
        cout << ans << endl;
        
    }
    
    return 0;
}