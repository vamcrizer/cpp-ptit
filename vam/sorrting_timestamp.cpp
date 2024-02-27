#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = (int)1e7;

struct ds{
    int hour;
    int min;
    int sec;
};
typedef struct ds ds;
void input(ds &a){
    cin >> a.hour >> a.min >> a.sec;
}
bool cmp(ds a, ds b){
    if (a.hour != b.hour){
        return a.hour < b.hour;
    }
    if (a.min != b.min){
        return a.min < b.min;
    }
    return a.sec < b.sec;
}


int main(){
    int n; cin >> n;
    ds a[n];
    for (int i = 0; i < n; i++){
        input(a[i]);
    }
    sort(a, a + n, cmp);
    for (int i = 0; i < n; i++){
        cout << a[i].hour << " " << a[i].min << " " << a[i].sec << endl;
    }
}