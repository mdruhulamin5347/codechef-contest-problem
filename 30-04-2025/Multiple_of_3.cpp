
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    if(n <= 1){
        cout << 0 << endl;
    }
    else if(n >=2 && n <= 4){
        cout << 3 << endl;
    }
    else if(n >= 5 && n <= 7){
        cout << 6 << endl;
    }
    else if( n >= 8 && n <= 10){
        cout << 9 << endl;
    }
    return 0;
}
