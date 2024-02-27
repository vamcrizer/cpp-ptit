#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

class Point{
	public:
		double x, y;
		Point(double tre, double em);
		friend istream& operator >> (istream &in, Point &a);
};

Point::Point(double tre, double em){
	x = tre;
	y = em;
}

istream& operator >> (istream &in, Point &a){
	cin >> a.x >> a.y;
	return in;
}

double dist(Point &a, Point &b){
	return 1.0 * sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		Point a(0, 0);
		Point b(0, 0);
		cin >> a >> b;
		cout << fixed << setprecision(4);
		cout << dist(a, b) << endl;
	}
	// Biden
	return 0;
}

