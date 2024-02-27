#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld = long double;
using str = string;

struct hs{
	int index;
	char id[15], ten[55], lop[15], email[123], cor[20];
};
typedef struct hs hs;
void edit(char a[]){
	a[strlen(a) - 1] = '\0';
}
void nhap(hs &n){
	fgets(n.id, 15, stdin);
	fgets(n.ten, 55, stdin);
	fgets(n.lop, 15, stdin);
	fgets(n.email, 123, stdin);
	fgets(n.cor, 20, stdin);
	edit(n.id); edit(n.ten); edit(n.lop); edit(n.email); edit(n.cor);
}
int cmp(const void*a, const void*b){
	hs *x = (hs*)a;
	hs *y = (hs*)b;
	return strcmp(x->id, y->id);
}
int main(){
	//ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	//cin.tie(0) -> sync_with_stdio(0);
	int n; cin >> n;
	cin.ignore();
	hs a[n+5];
	for(int i=0; i<n; i++){
		a[i].index = i+1;
		nhap(a[i]);
	}int q; cin >> q;
	while(q--){
		char s[20]; cin >> s;
		hs r[n+5];
		int stt = 0;
		for(int i=0; i<n; i++){
			if(strcmp(a[i].cor, s)==0){
				r[stt++] = a[i];
			}
		}qsort(r, stt, sizeof(hs), cmp);
		for(int i=0; i<stt; i++){
			cout << r[i].index << ' ' << r[i].id << ' ' << r[i].ten << ' ' << r[i].lop << ' ' << r[i].email << ' ' << s << endl;
		}
	}
}