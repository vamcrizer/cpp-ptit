#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = (int)1e9 + 7;

class ds{
public:
    double x, y;
    ds(double x, double y){
        this->x = x;
        this->y = y;
    }
};
int main(){
    int t; cin >> t;
    while(t--){
    double a,b,c,d;
    cin >> a >> b >> c >>d;
    ds A(a, b);
    ds B(c, d);
    cout << fixed << setprecision(4) << sqrt((B.x - A.x) *(B.x - A.x) + (B.y - A.y) * (B.y - A.y)) << endl;
    }
}
