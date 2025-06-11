

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
        int ans = n;
        
        while(true){
            int prev_ans = ans;

            if(n > 3)
                ans = n - 3;
            
            else if(n % 2 == 0)
                ans = n / 2;
            
            else
                break;            

            if(ans == prev_ans) 
                break;
            n = ans;
        }
        
        cout << ans << endl;
    }
    
    return 0;
}
