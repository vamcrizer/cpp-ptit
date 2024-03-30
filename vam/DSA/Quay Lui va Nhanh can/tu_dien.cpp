#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = (int)1e9 + 7;
bool visisted[100][100];
int k,m,n;
char a[105][105];
string res;
vector<string> s;
set<string> dict;
int dx[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
int dy[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
void input(){
    cin >> k >> n >> m;
    for (int i = 0; i < k; i++){
        string tmp;
        cin >> tmp; dict.insert(tmp);
    }
    for (int i = 1; i <= n ; i++){  
        for (int j = 1; j <= m; j++){
            cin >> a[i][j];
        }
    }
    memset(visisted, 0, sizeof(visisted));
}
void Try(int i, int j){
    res += a[i][j];
    if(dict.count(res)) s.push_back(res);
    for (int k = 0; k < 8; k++){
        int i1 = i + dx[k];
        int j1 = j + dy[k];
        if (i1 >= 1 && i1 <= n && j1 >=1 && j1 <= m && visisted[i1][j1] == 0){
            visisted[i1][j1] = 1;
            Try(i1,j1);
            visisted[i1][j1] = 0;
            res.pop_back();
        }
    }
}

int main(){
    input();
    for (int i = 1; i <= m ; i++){
        for (int j = 1; j <= n; j++){
            Try(i, j);
        }
    }
    sort(s.begin(), s. end());
    for (auto x : s){
        cout << x << " ";
    }
}