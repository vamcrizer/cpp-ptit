#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

class IntSet{
	public:
		set<int> x;
		set<int> y;
		map<int, int> mp;
		void nhap(int m, int n, ifstream& in){
			int a;
			for(int i = 0; i < m; i++){
				in >> a;
				x.insert(a);
			}
			for(int i = 0; i < n; i++){
				in >> a;
				y.insert(a);
			}
		}
		void xuat(){
			for(int n : x) mp[n]++;
			for(int n : y) mp[n]++;
			for(auto n : mp){
				if(n.second == 2) cout << n.first << " ";
			}
			mp.clear();
		}
};

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	ifstream input("DATA.in");
	int m, n;
	IntSet a;
	input >> m >> n;
	a.nhap(m, n, input);
	a.xuat();
	input.close();
	// Biden
	return 0;
}

