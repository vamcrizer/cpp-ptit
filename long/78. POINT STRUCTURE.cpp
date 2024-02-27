#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld = long double;
using str = string;
struct Point{
	double x, y;
};
typedef struct Point p;
void input(p &n){
	cin >> n.x >> n.y;
}
ld distance(p &a, p &b){
	return sqrtl((a.x - b.x)*(a.x - b.x) + (a.y - b.y)*(a.y - b.y));
}
int main(){
	struct Point A, B;
	int t; cin >> t;
	while(t--){
		input(A); input(B);
		cout << fixed << setprecision(4) << distance(A, B) << endl;
	}return 0;
}