#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n; cin >> n;
    while(n--){
    double a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << fixed << setprecision(4) << sqrt((c - a)*(c - a) + (d - b)*(d - b)) << endl;
    }
}