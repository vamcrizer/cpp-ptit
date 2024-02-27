#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define PI 3.141592653589793238

int main(){
    int cases;
    cin >> cases;
    while(cases--){
        double x1, y1, x2, y2, x3, y3;
        double AB, AC, BC;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
        AB = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
        AC = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
        BC = sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3));
        if ((AB + BC > AC) && (AB + AC > BC) && (AC + BC > AB)){
            double s = sqrt((AB + BC + AC) * (AB + BC - AC) * (AB - BC + AC) * (- AB + BC + AC));
            double r = AB * BC * AC / s;
            cout << fixed << setprecision(3);
            cout << r * r * PI;
        } else {
            cout << "INVALID";
        }
        cout << endl;
    }
    return 0;
}
