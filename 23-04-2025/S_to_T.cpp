
// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin >> t;
//     while(t--){
//         int n;
//         cin >> n;
//         string s;
//         string t;
//         cin >> s >> t;
//         int cnt = 0;
//         int flag = 0;
//         vector<int>v;
//         for(int i=0; i<n; i++){

//             if( i > 0 && s[i] != t[i]  && s[i-1] == '1'){
//                 if(s[i] == '0'){
//                     s[i] = '1';
//                 }
//                 else{
//                     s[i] = '0';
//                 }
//                 cnt++;
//                 v.push_back(i);
//             }
//             if(s[i] == t[i]){
//                 flag++;
//             }
            
//         }
//         if(flag==n){
//             cout << 0 << endl;
//         }
//         else if(cnt == 0){
//             cout << -1 << endl;
//         }
//         else{
//             cout << cnt << endl;
//             for(int val : v){
//                 cout << val << " ";
//             }
//         }
//         cout << endl;
//     }
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >>t;
    while(t--){
        int n;
        cin >> n;
        string s,t;
        cin >> s >>t;
        bool isPosible = true;
        vector<int>operations;
        for(int i = n-1;i>=0;i--){
            if(s[i] != t[i]){
                if(i >0 && s[i-1] == '1'){
                    operations.push_back(i-1);
                    s[i] = (s[i] =='0') ? '1' : '0';
                }
                else{
                    isPosible = false;
                    break;
                }
            }
        }
        if(operations.size() > 3 *n){
            isPosible = false;
        }
        if(!isPosible){
            cout << -1 <<endl;
        }
        else{
            cout << operations.size() <<endl;
            if(operations.size() > 0){
                 for(int i = 0;i<operations.size();i++){
                 cout << operations[i] +1 << ' ';
                }
                cout << endl;
            }
        }
    }
}