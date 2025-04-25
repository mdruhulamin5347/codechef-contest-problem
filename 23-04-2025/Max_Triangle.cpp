
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a,b,c;
        a = n;
        b = n-1;
        c = n-2;

        if((n*2) < (a+b+c)){
            cout << a + b + c << endl;            
        }
        else{
            cout << -1 << endl;
        }

    }
    return 0;
}