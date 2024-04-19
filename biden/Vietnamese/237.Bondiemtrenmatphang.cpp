#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

struct vect{
	int x, y, z;
};

ll det(vect a, vect b, vect c){
	ll res = 1ll * a.x * b.y * c.z + 1ll * a.y * b.z * c.x + 1ll * a.z * b.x * c.y;
	res = res - 1ll * a.z * b.y * c.x - 1ll * a.x * b.z * c.y - 1ll * a.y * b.x * c.z;
	return res;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		vect a[3];
		int firstx, firsty, firstz, tmpx, tmpy, tmpz;
		cin >> firstx >> firsty >> firstz;
		for(int i = 0; i < 3; i++){
			cin >> tmpx >> tmpy >> tmpz;
			a[i].x = firstx - tmpx;
			a[i].y = firsty - tmpy;
			a[i].z = firstz - tmpz;
		}
		if(det(a[0], a[1], a[2]) == 0) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	// Biden
	return 0;
}

