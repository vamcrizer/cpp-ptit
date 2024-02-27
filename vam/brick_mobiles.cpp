#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool palindrome(string a){
    int l = 0, r = a.length() - 1;
    while(l < r){
        if (a[l] != a[r]){
            return false;
        }
        ++l, --r;
    }
    return true;
}

int main(){
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);cout.tie(NULL);
    map <char, char> mp;
    mp['a'] = '2', mp['b'] = '2', mp['c'] = '2';
    mp['d'] = '3', mp['e'] = '3', mp['f'] = '3';
    mp['g'] = '4', mp['h'] = '4', mp['i'] = '4';
    mp['j'] = '5', mp['k'] = '5', mp['l'] = '5';
    mp['m'] = '6', mp['n'] = '6', mp['o'] = '6';
    mp['p'] = '7', mp['q'] = '7', mp['r'] = '7', mp['s'] = '7';
    mp['t'] = '8', mp['u'] = '8', mp['v'] = '8';
    mp['w'] = '9', mp['x'] = '9', mp['y'] = '9', mp['z'] = '9';
    int t; cin >> t;
    while(t--){
        string a; cin >> a;
        string tmp = "";
        transform(a.begin(), a.end(), a.begin(), ::tolower);
        for (int i = 0; i < a.length(); i++){
            tmp += mp[a[i]];
        }
        if (palindrome(tmp)){
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}