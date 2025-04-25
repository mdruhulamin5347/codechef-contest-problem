

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        multiset<int> ml;
        for(int i=0; i<n; i++){
            int x;
            cin >> x;
            ml.insert(x);
        }

        auto end_it = --ml.end();
        auto begin_it = ml.begin();
        if((*end_it - *begin_it) <= 0){
            cout << 0 << endl;
        }
        else{
            cout << abs(*end_it - *begin_it) - 1<< endl;
        }       

    }
    return 0;
}