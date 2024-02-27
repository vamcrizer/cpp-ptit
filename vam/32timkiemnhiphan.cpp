#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = (int)1e7;
int x[1000000] = {0};

int binary_search(int a[], int n, int x){
    int l = 0, r = n - 1;
    while(l <= r){
        int mid = l + (r - l)/2;
        if (a[mid] == x){
            return 1;
        } else if (a[mid] < x){
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    return -1;
}
 	

int main(){
    int t; cin >> t;
    while(t--){
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);cout.tie(NULL);
    int n,x; cin >> n >> x;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a + n);
    cout << binary_search(a, n, x) << endl;
    }
}