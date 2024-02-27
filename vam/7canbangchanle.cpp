#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool check(int n){
    int le = 0, chan = 0;
    while(n > 0){
        int digit = n % 10;
        if (digit & 1){
            le++;
        } else {
            chan++;
        }
        n/=10;
    }
    return le == chan;
}

int main(){
    int n;
    cin >> n;
    int c = 0;
    for (int i = pow(10, n-1); i < pow(10,n); i++){
        if (check(i)){
            cout << i << " ";
            c++;
        }
        if (c == 10){
            cout << endl;
            c = 0;
        }
    }
}