#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int MX = 1e6 + 5;
const int MOD = 1e9 + 7;

int main(){
    int t; cin >> t;
    while(t--){
    string a; cin >> a;
    int chan= 0, le = 0;
    for (int i = 0; i < a.length(); i+=2){
        chan += a[i] - '0';
    }
    for (int i = 1; i < a.length(); i+=2){
        le += a[i] - '0';
    }
    int dif = abs(chan - le);
    if (dif == 0 || dif % 11 == 0){
        cout << 1 << endl;
    } else {
        cout << 0 << endl;
    }
    }
}