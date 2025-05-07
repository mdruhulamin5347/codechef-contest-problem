#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >>t;
    while(t--){
        int n,h;
        cin>>n>>h;
        long long max_1 = 0 , max_2 = 0;
        for(int i = 0;i<n;i++){
            long long s,d;
            cin >>s >>d;
            if(s == 1){
                max_1 = max(max_1,d);
            }
            else{
                max_2 = max(max_2,d);
            }
        }
        
        if(h <= max_1){
            cout << 1 <<endl;
        }
        else if(h <= max_2){
            cout << 2 <<endl;
        }
        else{
            if(max_2 > max_1 * 2){
                int atteckNeed = h / max_2;
                if( max_2 * atteckNeed == h){
                    cout << atteckNeed * 2 <<endl;
                }
                else if(max_2 * atteckNeed + max_1 >= h){
                    cout << atteckNeed * 2 + 1 <<endl;
                }
                else{
                    cout << atteckNeed * 2 + 2 <<endl;
                }
            }
            else{
                int atteckNeed = h  / max_1;
                if(atteckNeed * max_1 == h){
                    cout << atteckNeed <<endl;
                }
                else{
                    cout << atteckNeed + 1 <<endl;
                }
            }
        }

    }
    
    return 0;
}