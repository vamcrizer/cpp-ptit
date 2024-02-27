#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = (int)1e9 + 7;

int start = 1;

struct ds{
    int id;
    string name;
    string type;
    double buy;
    double sell;
    double profit;
};
typedef struct ds ds;
void input(ds &a){
	cin.ignore();
    a.id = start++;
    getline(cin, a.name);
    getline(cin, a.type);
    cin >> a.buy;
    cin >> a.sell;
    a.profit = a.sell - a.buy;
	
}

bool cmp(ds a, ds b){
    return a.profit > b.profit;
}

int main(){
    int n; cin >> n;
    ds a[n];
    for (int i = 0; i < n; i++){
        input(a[i]);
    }
    sort(a, a + n, cmp);
    for (int i = 0; i < n; i++){
        cout << a[i].id << " " << a[i].name << " " << a[i].type << " " << fixed << setprecision(2) << a[i].profit << endl;
    }
}
