

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a,b,c;
    cin >> a >> b >> c;
    int result_1 = a * b;
    int result_2 = c * c;

    if (result_1 == result_2) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    
    return 0;
}