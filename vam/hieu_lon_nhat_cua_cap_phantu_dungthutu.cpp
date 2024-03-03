#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	ios_base::sync_with_stdio(0); 
    cin.tie(NULL);cout.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        int max = INT_MIN;
        for (auto &x : a) cin >> x;
        int ok = 0;
        for (int i = 0; i < n; i++){
            for (int j = i + 1; j < n; j++){
                if (a[i] < a[j]){
                    if (a[j] - a[i] > max){
                        max = a[j] - a[i];
                        ok = 1;
                    }
                }
            }
        }
        if (ok){
            cout << max << endl;
        } else {
            cout << -1 << endl;
        }
    }
}