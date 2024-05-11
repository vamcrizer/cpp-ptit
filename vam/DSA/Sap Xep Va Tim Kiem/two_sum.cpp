#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);cout.tie(NULL);
    int n, x; cin >> n >> x;
    vector<pair<int,int>> ve(n);
    for (int i = 0; i < n; i++){
        cin >> ve[i].first;
        ve[i].second = i;
    }
    sort(ve.begin(), ve.end());
    int l = 0, r = n - 1;
    while(l < r){
        if (ve[l].first + ve[r].first == x){
            cout << ve[l].second + 1 << " " << ve[r].second + 1 << endl;
            return 0;
        } else if (ve[l].first + ve[r].first < x){
            l++;
        } else {
            r--;
        }
    }
    cout << "IMPOSSIBLE\n";
}