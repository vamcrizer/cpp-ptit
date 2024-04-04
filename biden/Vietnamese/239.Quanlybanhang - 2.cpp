#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

class KhachHang;
class MatHang;
class HoaDon;
int i1 = 1, i2 = 1, i3 = 1;
map<string, KhachHang> mp1;
map<string, MatHang> mp2;

class KhachHang{
	friend class HoaDon;
	public:
		string id;
		string name;
		string gender;
		string dob;
		string address;
		friend istream& operator >> (istream &in, KhachHang &a){
			a.id = to_string(i1);
			if(a.id.size() == 1) a.id.insert(0, "00");
			else if(a.id.size() == 2) a.id.insert(0, "0");
			a.id.insert(0, "KH");
			i1++;
			scanf("\n");
			getline(cin, a.name);
			cin >> a.gender >> a.dob;
			scanf("\n");
			getline(cin, a.address);
			mp1[a.id] = a;
			return in;
		}
};

class MatHang{
	friend class HoaDon;
	public:
		string item_id;
		string item_name;
		string item_unit;
		int item_buy, item_sell;
		friend istream& operator >> (istream &in, MatHang &a){
			a.item_id = to_string(i2);
			if(a.item_id.size() == 1) a.item_id.insert(0, "00");
			else if(a.item_id.size() == 2) a.item_id.insert(0, "0");
			a.item_id.insert(0, "MH");
			i2++;
			scanf("\n");
			getline(cin, a.item_name);
			getline(cin, a.item_unit);
			cin >> a.item_buy >> a.item_sell;
			mp2[a.item_id] = a;
			return in;
		}
};

class HoaDon{
	public:
		string paper_id;
		string customer_id;
		string item_id;
		int quantity;
		friend istream& operator >> (istream &in, HoaDon &a){
			a.paper_id = to_string(i3);
			if(a.paper_id.size() == 1) a.paper_id.insert(0, "00");
			else if(a.paper_id.size() == 2) a.paper_id.insert(0, "0");
			a.paper_id.insert(0, "HD");
			i3++;
			cin >> a.customer_id >> a.item_id >> a.quantity;
			return in;
		}
		friend ostream& operator << (ostream &out, HoaDon a){
			cout << a.paper_id << " " << mp1[a.customer_id].name << " " << mp1[a.customer_id].address << " " << mp2[a.item_id].item_name << " " << a.quantity << " ";
			cout << 1ll * mp2[a.item_id].item_sell * a.quantity << " " << 1ll * mp2[a.item_id].item_sell * a.quantity - 1ll * mp2[a.item_id].item_buy * a.quantity << endl;
			return out;
		}
		// Biden
};

bool cmp(HoaDon a, HoaDon b){
	if(1ll * (mp2[a.item_id].item_sell - mp2[a.item_id].item_buy) * a.quantity == 1ll * (mp2[b.item_id].item_sell - mp2[b.item_id].item_buy) * b.quantity)
		return a.paper_id < b.paper_id;
	return 1ll * (mp2[a.item_id].item_sell - mp2[a.item_id].item_buy) * a.quantity > 1ll * (mp2[b.item_id].item_sell - mp2[b.item_id].item_buy) * b.quantity;
}

void sapxep(HoaDon *a, int n){
	sort(a, a + n, cmp);
}

int main(){
    KhachHang dskh[25];
    MatHang dsmh[45];
    HoaDon dshd[105];
    int N, M, K, i;
    cin >> N;
    for(i = 0; i < N; i++) cin >> dskh[i];
    cin >> M;
    for(i = 0; i < M; i++) cin >> dsmh[i];
    cin >> K;
    for(i = 0; i < K; i++) cin >> dshd[i];
    sapxep(dshd, K);
    for(i = 0; i < K; i++) cout << dshd[i];
	// Biden
	return 0;
}
