#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = (int)1e9 + 7;

bool cmp(char a, char b){
    if (isdigit(a) || isdigit(b)){
        return a > b;
    }
    return a < b;
}

int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        sort(s.begin(), s.end(), cmp);
        int sum = 0;
        int idx;
        for (int i = 0; i < s.length(); i++){
            if (isdigit(s[i])){
                sum += (s[i] - '0');
            }
        }
        for (int i = 0; i < s.length(); i++){
            if (!isdigit(s[i])){
                cout << s[i];
            }
        }
        cout << sum << endl;
    }
}