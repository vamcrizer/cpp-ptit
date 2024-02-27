#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld = long double;
using str = string;


struct ng{
	char ten[20], tmp[22], dob[5][5];	
};
typedef struct ng ng;
int cmp(const void*a, const void*b){
	ng *x = (ng*)a;
	ng *y = (ng*)b;
	if(strcmp(x->dob[3], y->dob[3])==0){
		if(strcmp(x->dob[2], y->dob[2])==0) return strcmp(x->dob[1], y->dob[1]);
		return strcmp(x->dob[2], y->dob[2]);
	}return strcmp(x->dob[3], y->dob[3]);
}
int main(){
	//ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin.tie(0) -> sync_with_stdio(0);
	int n; cin >> n;
	ng a[n+5];
	for(int i=0; i<n; i++){
		int stt = 1;
		cin >> a[i].ten >> a[i].tmp;
		char *tu = strtok(a[i].tmp, "/");
		while(tu != NULL){
			strcpy(a[i].dob[stt++], tu);
			tu = strtok(NULL, "/");
		}
	}qsort(a, n, sizeof(ng), cmp);
	cout << a[n-1].ten << endl << a[0].ten;
}