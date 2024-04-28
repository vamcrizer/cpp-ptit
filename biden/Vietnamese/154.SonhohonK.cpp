#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		int n, k, ans = 1e8;
		cin >> n >> k;
		int a;
		vector<int> v; // prefix sum dem so ptu > k tu 1 den n
		int cnt = n; // dem so phan tu <= k
		v.push_back(0);
		for(int i = 1; i <= n; i++){
			cin >> a;
			v.push_back(v[i - 1]);
			if(a > k){
				cnt--;
				v[i]++;
			}
		}
		for(int i = cnt, j = 0; i < v.size(); i++, j++){
			// trong moi day con tu cnt den n, thuc hien dem so phan tu can bo ra ngoai de xep lai
			// so phan tu > k trong day = so buoc doi cho => lay min
			ans = min(ans, v[i] - v[j]);
		}
		// gia su sau khi doi cho: 9 9 9 (1 2 3 4) 8 8
		cout << ans << endl;
	}
	// Biden
	return 0;
}

