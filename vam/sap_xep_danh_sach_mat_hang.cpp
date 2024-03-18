#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = (int)1e9 + 7;
int start = 1;

struct danhsach{
    int stt;
    string name;
    string type;
    double buy;
    double sell;
    double profit;
};
typedef struct danhsach ds;
void input(ds &a){
    a.stt = start++;
    getline(cin, a.name);
    getline(cin, a.type);
    cin >> a.buy >> a.sell;
    a.profit = a.sell - a.buy;
    cin.ignore();
}

bool cmp(ds a, ds b){
    return a.profit > b.profit;
}

void in(ds a){
    cout << a.stt << " " << a.name << " " << a.type << " " << fixed << setprecision(2) << a.profit << endl; 
}
int main(){
    int n; cin >> n;
    cin.ignore();
    ds a[n];
    for (int i = 0; i < n; i++){
        input(a[i]);
    }
    sort(a, a + n, cmp);
    for (int i = 0; i < n; i++){
        in(a[i]);
    }

}