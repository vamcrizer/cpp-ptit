#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n; cin >> n;
    double s = 0;
    for(int i = 1; i <= n; ++i) s += 1.0 / i;
    cout << setprecision(4) << fixed << s;
	// Biden
	return 0;
}
