#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int i = 0 ; i < n ; i++){
            cin >> a[i];
        }
        int mino = INT_MAX;
        for(int i = 0 ; i < n ; i++){
            for(int j = i + 1 ; j < n ; j++){
                int ok = a[i] + a[j];
                if (abs(ok) < abs(mino)){
                    mino = ok;
                }
            }
        }
        cout << mino << endl;
    }
    return 0;
}
