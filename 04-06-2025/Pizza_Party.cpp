
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a, b;
    cin >> a >> b;

    int pizza_for_man = (a + 1) * 4;
    int pizza_for_girl = b * 3;

    int total_slices = pizza_for_man + pizza_for_girl;

    int ans = ceil((double)total_slices / 8);

    cout << ans << "\n";
    
    return 0;
}