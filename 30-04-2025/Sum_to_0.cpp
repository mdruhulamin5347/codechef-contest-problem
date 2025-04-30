

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>v(n);

        if(n <= 1){
            v[0] = -1;
        }
        else if(n % 2 == 0){
            for(int i = 0; i < n; i+=2){
                v[i] = 3;
                v[i+1] = -3;
            }
        }
        else{
            for(int i = 0; i < n; i++){
                if(i == 0){
                    v[i] = 1;
                }
                else if(i == 1){
                    v[i] = 2;
                }
                else if(i == 2){
                    v[i] = -3;
                }
                else{
                    v[i] = 3;
                    v[i+1] = -3;
                    i++;
                }
                
            }
        }

        for(int val : v){
            cout << val << " ";    
            
        }
        cout << endl;   

    }
    return 0;
}