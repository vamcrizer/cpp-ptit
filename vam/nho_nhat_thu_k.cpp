#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	ios_base::sync_with_stdio(0); 
    cin.tie(NULL);cout.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n, k; cin >>n >> k;
        int a[n];
        for (auto &x : a) cin >> x;
        sort(a, a + n);
        cout << a[k - 1] << endl;
    }
}