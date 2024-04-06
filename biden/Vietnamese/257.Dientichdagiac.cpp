#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

struct Point{
	int x, y;
};

double area(Point a, Point b, Point c){
	return 0.5 * abs((b.x - a.x) * (c.y - a.y) - (c.x - a.x) * (b.y - a.y));
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		Point a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i].x >> a[i].y;
		}
		double s = 0;
		for(int i = 1; i < n - 1; i++){
			s += area(a[0], a[i], a[i + 1]);
		}
		cout << fixed << setprecision(3);
		cout << s << endl;
	}
	// Biden
	return 0;
}
