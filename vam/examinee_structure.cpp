#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = (int)1e9 + 7;

struct Examinee{
    string name;
    string date;
    double x,y,z;
};

void input(struct Examinee &a){
    getline(cin, a.name);
    cin >> a.date;
    cin >> a.x >> a.y >> a.z;
}

void print(struct Examinee a){
    cout << a.name << " " << a.date << fixed << " " << setprecision(1) << a.x + a.y + a.z;
}

int main(){
    struct Examinee A;
    input(A);
    print(A);
    return 0;
}