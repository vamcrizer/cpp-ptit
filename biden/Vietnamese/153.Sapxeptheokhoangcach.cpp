#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

typedef struct fainainambo{
	int idx;
	int value;
} fnnb;

int x;
bool cmp(fnnb a, fnnb b){
	if(abs(x - a.value) == abs(x - b.value))
		return a.idx < b.idx;
	return abs(x - a.value) < abs(x - b.value); 
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		int n;
		cin >> n >> x;
		fnnb a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i].value;
			a[i].idx = i;
		}
		sort(a, a + n, cmp);
		for(int i = 0; i < n; i++) cout << a[i].value << " ";
		cout << endl;
	}
	// Biden
	return 0;
}

