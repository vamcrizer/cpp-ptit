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
    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            int y = x - ve[i].first - ve[j].first;
            int l = j + 1, r = n - 1;
            while(l < r){
                if (ve[l].first + ve[r].first == y){
                    cout << ve[i].second + 1 << " " << ve[j].second + 1 << " " << ve[l].second + 1 << " " << ve[r].second + 1;
                    return 0;
                } else if (ve[l].first + ve[r].first < y){
                    l++;
                } else {
                    r--;
                }
            }
        }
    }
    cout << "IMPOSSIBLE\n";
}