#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = (int)1e9 + 7;

struct Point{
    double x, y;
};

void input(struct Point &a){
    cin >> a.x >> a.y;
}

double distance(struct Point A, struct Point B){
    return sqrt((B.x - A.x)*(B.x - A.x) + (B.y - A.y)*(B.y - A.y));
}

int main(){
struct Point A, B;
    int t;
    cin>>t;
    while(t--){
    input(A); input(B);
    cout << fixed << setprecision(4) << distance(A,B) << endl;
    }
return 0;
}