

// // 1 number solution

// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
    
//     int t;
//     cin >> t;

//     while(t--){
//         int n;
//         cin >> n;
//         vector<int> v(n);
//         for(int i=0; i<n; i++){
//             cin >> v[i];
//         }

//         int l=0,r=0;
//         int sum = 0;
//         bool found = false;
//         for(; l<n; ){
//             while(r < n){
//                 sum += v[r];
//                 if(sum % 3 == 0){
//                     found = true;
//                 }
//                 r++;
//             }
            
//             sum -= v[l];
//             l++;

//         }
        
//         if(found){
//             cout << "Yes" << endl;
//         } else {
//             cout << "No" << endl;
//         }
//     }
    
//     return 0;
// }


// perfect and optimize solution




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
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }

        bool flag = false;

        for(int i = 0; i < n; i++){
            int sum = 0;
            for(int j = i; j < n; j++){
                sum += v[j];
                if(sum % 3 == 0){
                    flag = true;
                    break;
                }
            }
            if(flag) 
                break;
        }

        if(flag) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    
    return 0;
}


