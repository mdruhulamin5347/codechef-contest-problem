

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int a, b;
    cin >> a >> b;

    if (b >= 3 * a) {
        cout << "Rain" << endl;
    } else {
        cout << "Dry" << endl;
    }

    return 0;
}

