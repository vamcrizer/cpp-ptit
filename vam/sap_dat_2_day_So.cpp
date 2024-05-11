#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);cout.tie(NULL);
    int t; cin >> t;
    while(t--){
    int n, m; cin >> n >> m;
    int a[n], b[m];
    map<int,int> mp;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        mp[a[i]]++;
    }
    sort(a, a + n);
    for (int i =0;i < m; i++){
        cin >> b[i];
    }
    for (int i = 0; i < m; i++){
        for (int j = 1; j <= mp[b[i]]; j++){
            cout << b[i] << " ";    
        }
        mp[b[i]] = 0;
    }
    for (int i = 0; i < n; i++){
        if (mp[a[i]]){
            cout << a[i] << " ";    
        }
    }
    cout << endl;
    }
}