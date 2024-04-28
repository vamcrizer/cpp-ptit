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
			getline(in >> ws, a.name);
			in >> a.gender >> a.dob;
			getline(in >> ws, a.address);
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
			getline(in >> ws, a.item_name);
			getline(in >> ws, a.item_unit);
			in >> a.item_buy >> a.item_sell;
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
			in >> a.customer_id >> a.item_id >> a.quantity;
			return in;
		}
		friend ostream& operator << (ostream &out, HoaDon a){
			out << a.paper_id << " " << mp1[a.customer_id].name << " " << mp1[a.customer_id].address << " " << mp2[a.item_id].item_name << " " << mp2[a.item_id].item_unit << " " << mp2[a.item_id].item_buy << " " << mp2[a.item_id].item_sell << " " << a.quantity << " ";
			out << 1ll * mp2[a.item_id].item_sell * a.quantity << endl;
			return out;
		}
		// Biden
};

int main(){
	ifstream inputKH("KH.in");
    ifstream inputMH("MH.in");
    ifstream inputHD("HD.in");
    KhachHang dskh[25];
    MatHang dsmh[45];
    HoaDon dshd[105];
    int N, M, K, i;
    inputKH >> N;
    for(i = 0; i < N; i++) inputKH >> dskh[i];
    inputMH >> M;
    for(i = 0; i < M; i++) inputMH >> dsmh[i];
    inputHD >> K;
    for(i = 0; i < K; i++) inputHD >> dshd[i];
    for(i = 0; i < K; i++) cout << dshd[i];
    inputKH.close();
    inputMH.close();
    inputHD.close();
	// Biden
	return 0;
}
