#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool cmp(string a, string b){
    return a < b;
}

int main(){
    ifstream file("SEQUENCE.in");
    vector<string> ve;
    ll n; file >> n;
    ll a[n];
    for (int i = 0 ; i < n; i++){
        file >> a[i];
    }
    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            if (a[i] < a[j]){
                ve.push_back(to_string(a[i]) + " " + to_string(a[j]));
                string tmp = to_string(a[i]) + " ";
                int tmp2 = a[i];
                for (int k = i + 1; k <= j; k++){
                    if (tmp2 <= a[k]){
                        tmp += to_string(a[k]) + " ";
                        tmp2 = a[k];
                    } 
                }
                tmp.pop_back();
                ve.push_back(tmp);
            }
        }
    }
    set <string> se;
    for (auto x : ve){
        se.insert(x);
    }
    vector<string> ve2;
    for (auto x : se){
        ve2.push_back(x);
    }
    sort(ve2.begin(), ve2.end(), cmp);
    for (auto x : ve2){
        cout << x << endl;
    }
}