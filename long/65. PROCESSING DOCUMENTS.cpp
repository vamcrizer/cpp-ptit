#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld = long double;
using str = string;

void solve(char a[]){
	char r[2222][2222];
	int stt = 0;
	char *tu = strtok(a, " ");
	while(tu != NULL){
		strcpy(r[stt++], tu);
		tu = strtok(NULL, " ");
	}int dk = 0;
	for(int i=0; i<stt; i++){
		int l = strlen(r[i]);
		for(int j=0; j<l; j++){
		    if(!dk){
		        if(r[i][j] >= 'a' && r[i][j] <= 'z'){
		            r[i][j] -= 32;
		        }if(r[i][j] >= 'A' && r[i][j] <= 'Z'){
		            dk = 1;
		        }
		    }else{
		        if(r[i][j] >= 'A' && r[i][j] <= 'Z'){
		            r[i][j] += 32;
		        }
		    }
		}cout << r[i] << ' ';
	}cout << endl;
}

int main(){
	//ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin.tie(0) -> sync_with_stdio(0);
	str d;
	char tmp[222][222];
	int dem = 0, stt = 0;
	while(getline(cin, d)){
		int n = d.size();
		for(int i=0; i<n; i++){
			if(!(d[i]=='.' || d[i]=='?' || d[i]=='!')){
				tmp[dem][stt++] = d[i];
			}else{
				solve(tmp[dem]);
				++dem; stt = 0;
			}
		}
	}return 0;
}