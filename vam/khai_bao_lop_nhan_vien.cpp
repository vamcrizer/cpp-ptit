#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = (int)1e9 + 7;

class NhanVien{
string name;
string gender;
string date;
string address;
string phone;
string date2;
    friend istream& operator>>(istream& in, NhanVien &p){
        getline(in, p.name);
        in >> p.gender >> p.date;
        in.ignore();
        getline(in, p.address);
        in >> p.phone >> p.date2;
        return in;
    }
    friend ostream& operator>>(ostream& out, NhanVien &p){
        out << "00001" << " " << p.name << " " << p.gender << " " << p.date << " " << p.address << " " << p.phone << " " << p.date2;
        return out;
    }
};

int main(){
    NhanVien a;
    cin >> a;
    cout >> a;
    return 0;
}
