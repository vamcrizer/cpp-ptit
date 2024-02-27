#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld = long double;
using str = string;

#define PI 3.141592653589793238
struct tg{
	ld x, y;
};
typedef struct tg tg;
ld dis(ld a, ld b, ld c, ld d){
	return sqrt((a-c)*(a-c) + (b-d)*(b-d));
}
int main(){
	//ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin.tie(0) -> sync_with_stdio(0);
	int t; cin >> t;
	while(t--){
		tg a[5];
		for(int i=1; i<=3; i++){
			cin >> a[i].x >> a[i].y;
		}
		ld m = dis(a[1].x, a[1].y, a[2].x, a[2].y);
		ld n = dis(a[1].x, a[1].y, a[3].x, a[3].y);
		ld p = dis(a[2].x, a[2].y, a[3].x, a[3].y);
		if(m+n <= p || m+p <= n || n+p <= m){
			cout << "INVALID\n";
			continue;
		}
		ld ncv = (m+n+p)/2;
		ld s = sqrtl(ncv*(ncv-m)*(ncv-n)*(ncv-p));
		ld r = m*n*p/(4*s);
		cout << fixed << setprecision(3) << PI*r*r << endl;
	}
}