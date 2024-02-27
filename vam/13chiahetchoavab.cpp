#include <bits/stdc++.h>
using namespace std;
using ll = long long;


int main(){
    int t; cin >> t;
    while(t--){
    int x,y,a,b;
    cin >> x >> y >> a >> b;
    int cnt = 0;
    for (int i = x; i <= y; i++){
        if (i % a == 0 || i % b == 0){
            cnt++;
        }
    }
    cout << cnt << endl;
    }
}