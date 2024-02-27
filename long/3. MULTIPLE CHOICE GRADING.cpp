#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using str = string;
char mot[] = "@ABBADCCABDCCABD";
char hai[] = "@ACCABCDDBBCDDBB";
int main(){
	//ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin.tie(0) -> sync_with_stdio(0);
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		char r[50]; cin.getline(r, 50);
		ld res = 0, diem = (double)2/3;
		int cnt = 1;
		if(n==101){
			for(int i=1; i<=30; i+=2){
				if(r[i]==mot[cnt++]) res += diem;
			}
		}else{
			for(int i=1; i<=30; i+=2){
				if(r[i]==hai[cnt++]) res += diem;
			}
		}cout << fixed << setprecision(2) << res << endl;
	}
}
