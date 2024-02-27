#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define PI 3.141592653589793238

struct ds{
    double x1,y1,x2,y2,x3,y3;
    double a, b, c;
};

void input(ds &A){
    cin >> A.x1 >> A.y1 >> A.x2 >> A.y2 >> A.x3 >> A.y3;
    A.a = sqrt((A.x1 - A.x2)*(A.x1 - A.x2) + (A.y1 - A.y2)*(A.y1 - A.y2));
    A.b = sqrt((A.x1 - A.x3)*(A.x1 - A.x3) + (A.y1 - A.y3)*(A.y1 - A.y3));
    A.c = sqrt((A.x2 - A.x3)*(A.x2 - A.x3) + (A.y2 - A.y3)*(A.y2 - A.y3));
}

double solve(ds A){
    if (A.a + A.b <= A.c || A.a + A.c <= A.b || A.b + A.c <= A.a){
        return -1;
    }
    double p = (A.a + A.b + A.c) / 2;
    double area = sqrt(p*(p - A.a)*(p - A.b)*(p - A.c));
    double radius = A.a * A.b * A.c / (4.0 * area);
    return PI * radius * radius;
}

int main(){
    int n; cin >> n;
    while(n--){
        ds A;
        input(A);
        if (solve(A) != -1){
            cout << fixed << setprecision(3) << solve(A) << endl;
        } else if (solve(A) == -1) {
            cout <<  "INVALID\n";  
        }
    }
}