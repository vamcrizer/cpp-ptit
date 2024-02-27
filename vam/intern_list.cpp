#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int start = 1;

struct ds{
    int idx;
    string id;
    string name;
    string lop;
    string email;
    string corp;
};
typedef struct ds ds;

bool cmp(ds a, ds b){
    return a.id < b.id;
}

void input(ds &a){
    a.idx = start++;
    cin >> a.id;
    cin.ignore();
    getline(cin, a.name);
    cin >> a.lop >> a.email >> a.corp;
    
}
int main(){
    int n; cin >> n;
    ds a[n];
    for (int i = 0; i < n; i++){
        input(a[i]);
    }
    sort(a, a+ n, cmp);
    int t; cin >> t;
    for (int i = 0 ; i < t; i++){
        string cty; cin >> cty;
        for (int i = 0; i < n; i++){
            if (a[i].corp == cty){
                cout << a[i].idx << " " << a[i].id << " " << a[i].name << " " << a[i].lop << " " << a[i].email << " " << a[i].corp << endl;
            }
        }
    }
}