#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// int sum_of_digit(string n){
//     int sum = 0;
//     for (int i = 0; i < n.length(); i++){
//         sum += n[i] - '0';
//     }
//     return sum == 9;
// }

bool check(string a){
    int sum = 0;
    for (int i = 0; i < a.length(); i++){
        sum += a[i] - '0';
    }
    if (sum == 9){
        return true;
    } else if (sum > 9) {
        return check(to_string(sum));
    } else {
        return false;
    }
}

int main(){
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);cout.tie(NULL);
    int t; cin >> t;
    while(t--){
        string a; cin >> a;
        cout << check(a) << endl;
    }
}