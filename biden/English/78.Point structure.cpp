#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

struct Point{
    double x, y;
};

void input(Point &Target){
	cin >> Target.x >> Target.y;
}

double distance(Point A, Point B){
	return sqrt((A.x - B.x) * (A.x - B.x) + (A.y - B.y) * (A.y - B.y));
}

int main(){
	struct Point A, B;
	int t; cin >> t;
	while(t--){
		input(A);
		input(B);
		cout << fixed << setprecision(4) << distance(A,B) << endl;
	}
	// Biden
	return 0;
}

