


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
        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }
        long long even_sum = 0, odd_sum = 0;

        for(int i=0,j=1; i<n; i++, j++){
            if(j % 2 == 0){
                even_sum += v[i];
            } else {
                odd_sum += v[i];
            }
        }
        cout << max(even_sum, odd_sum) << endl;
    }
    
    return 0;
}