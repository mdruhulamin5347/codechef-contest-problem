
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s1;
        string s2;
        cin >> s1 >> s2;
        int s1_cnt = 0;
        int s2_cnt = 0;
        bool flag = true;

        for(int i = 0; i < n; i++){
            if(s1[i] == '1') s1_cnt++;
            if(s2[i] == '1') s2_cnt++;            

            if(s2[i] == '1' && s1[i] != '1') {
                flag = false;
            }
        }

        if(flag && s1_cnt >= s2_cnt && (s1_cnt - s2_cnt) % 2 == 0){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }


    }
    return 0;
}