


#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a,b,p,q;
    cin >> a >> b >> p >> q;

    int mx = max((a * p),(b * q));

    cout << mx << endl;


    return 0;
}