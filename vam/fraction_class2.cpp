#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = (int)1e9 + 7;

ll lcm(ll a, ll b){
    return a / __gcd(a, b) * b;
}

class ds{
private:
    ll tu;
    ll mau;
public:
    void setTu(ll tu){
        this->tu = tu;
    }
    ll getTu(){
        return tu;
    }
    void setMau(ll mau){
        this->mau = mau;
    }
    ll getMau(){
        return mau;
    }
};

int main(){
    ll tu, mau, tu2, mau2;
    cin >> tu >> mau >> tu2 >> mau2;
    ds A; ds B; ds C;
    A.setTu(tu);
    A.setMau(mau);
    B.setTu(tu2);
    B.setMau(mau2);
    ll mcnn = lcm(A.getMau(), B.getMau());
    A.setTu(A.getTu() * (mcnn / A.getMau()));
    B.setTu(B.getTu() * (mcnn / B.getMau()));
    A.setMau(mcnn);
    B.setMau(mcnn);
    C.setTu(A.getTu() + B.getTu());
    C.setMau(mcnn);
    ll gcd = __gcd(C.getTu(), C.getMau());
    cout << C.getTu() /  gcd << "/" << C.getMau() / gcd;
}
