#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = (int)1e7;

struct ds{
    string info;
    string name;
    int day;
    int month;
    int year;
};
typedef struct ds ds;

void input(ds &a){
    vector<string> ve;
    
    getline(cin, a.info);
    for (int i = 0; i < (a.info).length(); i++){
        if (a.info[i] == '/'){
            a.info[i] = ' ';
        }
    }
    stringstream ss(a.info);
    string word;
    while(ss >> word){
        ve.push_back(word);
    }
    a.name = ve[0];
    a.day = stoi(ve[1]);
    a.month = stoi(ve[2]);
    a.year = stoi(ve[3]);
    
}
bool cmp(ds a, ds b){
    if (a.year != b.year){
        return a.year < b.year;
    }
    if (a.month != b.month){
        return a.month < b.month;
    }
    return a.day < b.day;
}
int main(){
    int n; cin >> n;
    cin.ignore();
    ds a[n];
    for (int i = 0; i < n; i++){
        input(a[i]);
    }
    sort(a, a + n, cmp);
    cout << a[n - 1].name << endl;
    cout << a[0].name << endl;
}