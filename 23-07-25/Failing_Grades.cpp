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
        vector<int> a(n);
        int sum = 0;
        bool ans = false;

        for(int i = 0; i < n; i++){
            cin >> a[i];
            sum += a[i];
            double avg = (double)sum / (i + 1);

            if(avg < 40){
                ans = true;
            }
        }

        if(ans){
            cout << "No" << endl;
        } else {
            cout << "Yes" << endl;
        }
    }

    return 0;
}