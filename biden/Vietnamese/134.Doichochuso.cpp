#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		string s;
		cin >> s;
		int pos = -1, temp = -1;
	    char max = -1;
	    // Uu tien gia tri dang sau trc
	    for(int i = 0; i < s.size() - 1; i++){
	        if(s[i] > s[i + 1]){
	            temp = i;
	        }
	    }
	    if(temp == -1) s = "-1";
	    else {
		    for(int i = temp + 1; i < s.size(); i++){
		    	// Tim so < s[temp] ma lon nhat
		        if(s[i] < s[temp] && max < s[i]){
		            max = s[i], pos = i;
		        }
		    }
		    swap(s[temp], s[pos]);	    	
		}
	    cout << s << endl;
	}
	// Biden
	return 0;
}
