#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int n, m, k;
        cin >> n >> m >> k;

        int total = n * m;
        int ans = 0;

        if(k == 0){
            ans = total;
        } else {
            for(int r = 1; r < n; ++r){
                int part1 = r * m;
                int part2 = (n - r) * m;
                if(part1 >= k) ans = max(ans, part2);
                if(part2 >= k) ans = max(ans, part1);
            }

            for(int c = 1; c < m; ++c){
                int part1 = n * c;
                int part2 = n * (m - c);
                if(part1 >= k) ans = max(ans, part2);
                if(part2 >= k) ans = max(ans, part1);
            }
        }

        cout << ans << '\n';
    }

    return 0;
}