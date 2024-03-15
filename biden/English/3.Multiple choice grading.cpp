#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	cin.ignore();
	string de101 = "A B B A D C C A B D C C A B D";
	string de102 = "A C C A B C D D B B C D D B B";
	while(t--){
		string ans, check;
		double point = 10.0 / 15.0;
		double score = 0;
		int n; cin >> n;
		cin.ignore();
		getline(cin, ans);
		if(n == 101) check = de101;
		else if(n == 102) check = de102;
		for(int i = 0; i < ans.length(); i+=2){
			if(ans[i] == check[i]) score += point; 
		}
		cout << fixed << setprecision(2);
		cout << (double) score << endl;
	}
	// Biden
	return 0;
}
