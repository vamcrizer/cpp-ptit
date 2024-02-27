#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = (int)1e9 + 7;

int main(){
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);cout.tie(NULL);
    int t; cin >> t;
    while(t--){
    int n; cin >> n;
    int a[n]; for (int &x : a) cin >> x;
    sort(a, a + n);
    int min = INT_MAX;
    for (int i = 1; i < n; i++){
        if (a[i] - a[i - 1] < min){
            min = a[i] - a[i - 1];
        }
    }
    cout << min << endl;
    }
}