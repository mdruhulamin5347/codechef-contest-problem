
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int cnt_0 = 0, cnt_1 = 0, cnt_2 = 0;
        for(int i=0; i<n; i++){
            int x;
            cin >> x;
            if(x == 0){
                cnt_0++;
            }
            else if(x == 1){
                cnt_1++;
            }
            else{
                cnt_2++;
            }
        }
        if(n % 2 != 0){
            cout << "No" << endl;
        }
        else if(abs(cnt_1 - cnt_2) <= cnt_0){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
     
    }
    return 0;
}