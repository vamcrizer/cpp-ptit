#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int t;
    cin >> t;
    while(t--){
        char s[20], c[20];
        cin >> s >> c;
        int n1 = strlen(s);
        int n2 = strlen(c);
        for (int i = 0; i < n1; i++){
            if (s[i] == '6'){
                s[i] = '5';
            }
        }
        for (int i = 0; i < n2; i++){
            if (c[i] == '6'){
                c[i] = '5';
            }
        }
        ll min = strtoll(s, NULL, 10) + strtoll(c, NULL, 10);
        cout << min << " ";

        for (int i = 0; i < n1; i++){
            if (s[i] == '5'){
                s[i] = '6';
            }
        }
        for (int i = 0; i < n2; i++){
            if (c[i] == '5'){
                c[i] = '6';
            }
        }
        ll max = strtoll(s, NULL, 10) + strtoll(c, NULL, 10);
        cout << max;
        cout << endl;
    }
}