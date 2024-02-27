#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld = long double;
using str = string;

struct uni{
	char nd[20];
	ll fre;
};
typedef struct uni uni;

uni r[1234567];
int stt = 0;

int cmp(const void*a, const void*b){
	uni *x = (uni*)a;
	uni *y = (uni*)b;
	if(x->fre == y->fre) return strcmp(x->nd, y->nd);
	return y->fre - x->fre;
}

void edit(char *tu){
	int n = strlen(tu);
	for(int i=0; i<n; i++){
		if(tu[i] >= 'A' && tu[i] <= 'Z') tu[i] += 32;
	}
}

int main(){
	//ios_base::sync_with_stdio(false);
	//cin.tie(nullptr);

	// ifstream file;
	// file.open("DOCUMENT.in");

	int n; cin >> n;
	cin.ignore();
	str tmp;
	char a[555];
	while(n--){
		getline(cin, tmp);
		strcpy(a, tmp.c_str());
		char *tu = strtok(a, " ,.?!:;-/()");
		while(tu != NULL){
			edit(tu);
			int dk = 1;
			for(int i=0; i<stt; i++){
				if(strcmp(tu, r[i].nd)==0){
					++r[i].fre;
					dk = 0;
					break;
				}
			}if(dk==1){
				strcpy(r[stt].nd, tu);
				r[stt].fre = 1;
				++stt;
			}tu = strtok(NULL, " ,.?!:;-/()");
		}
	}qsort(r, stt, sizeof(uni), cmp);
	for(int i=0; i<stt; i++){
		cout << r[i].nd << ' ' << r[i].fre << endl;
	}

	//file.close();
}