#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);cout.tie(NULL);
    int n; cin >> n;
    int _min = 1e9 + 1;
    int _max = 0;
    map<int,int> mp;
    for (int i = 0; i < n; i++){
        int x; cin >> x;
        mp[x]++;
        _min = min(_min, x);
        _max = max(_max,x);
    }
    if (_min != _max){
        cout << _max-_min << " " << 1ll*mp[_max]*mp[_min];
    } else {
        cout << _max-_min << " " << 1ll*mp[_min]*(mp[_min] - 1)/2;
    }
}