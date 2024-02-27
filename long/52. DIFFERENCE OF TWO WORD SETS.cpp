#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld = long double;
using str = string;

void sx(char a[][222], int n){
	for(int i=0; i<n; i++){
		int m = i;
		for(int j=i+1; j<n; j++){
			if(strcmp(a[j], a[m]) < 0) m = j;
		}swap(a[i], a[m]);
	}
}

int main(){
	//ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	//cin.tie(0) -> sync_with_stdio(0);
	int t; cin >> t;
	cin.ignore();
	while(t--){
		char s1[222], s2[222], a[50][222], b[50][222];
		fgets(s1, 2222, stdin);
		fgets(s2, 2222, stdin);
		s1[strlen(s1)-1] = s2[strlen(s2)-1] = '\0';
		int n=0, m=0;
		char *tu = strtok(s1, " ");
		while(tu != NULL){
			strcpy(a[n++], tu);
			tu = strtok(NULL, " ");
		}
		char *word = strtok(s2, " ");
		while(word != NULL){
			strcpy(b[m++], word);
			word = strtok(NULL, " ");
		}char r[50][222];
		int stt = 0;
		for(int i=0; i<n; i++){
			int dk = 1;
			for(int j=0; j<i; j++){
				if(strcmp(a[i], a[j])==0){
					dk = 0; break;
				}
			}if(dk==1){
				for(int j=0; j<m; j++){
					if(strcmp(a[i], b[j])==0){
						dk = 0; break;
					}
				}if(dk==1) strcpy(r[stt++], a[i]);
			}
		}sx(r, stt);
		for(int i=0; i<stt; i++){
			cout << r[i] << ' ';
		}cout << endl;
	}
}