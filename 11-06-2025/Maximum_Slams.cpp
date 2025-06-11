


#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    
    int calculation = 25 - n;

    int ans = ceil((double)calculation / 4);

    cout << ans;
 
    
    return 0;
}