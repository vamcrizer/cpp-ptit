#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);cout.tie(NULL);
    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    int res = 0;
    for (int i = 0; i < n; i++){ 
        for (int j = i + 1; j < n; j++){
            if (a[i] <= a[j]){
                if (j - i > res){
                    res = j - i;
                }
            }
        }
    }
    cout << res;
    return 0;
}
