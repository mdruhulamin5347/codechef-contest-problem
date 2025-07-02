

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int cnt_odd = 0, cnt_even = 0;
        
        for (int i = 1; i <= n; i++) {
            if(n % i == 0) {
                if (i % 2 == 0) {
                cnt_even++;
                } else {
                    cnt_odd++;
                }
            }
            
        }
        
        cout << cnt_odd << " " << cnt_even << endl;
    }
    
    return 0;
}