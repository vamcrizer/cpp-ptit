#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = (int)1e9 + 7;

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
    ll tu, mau;
    cin >> tu >> mau;
    ds A;
    A.setTu(tu);
    A.setMau(mau);
    ll gcd = __gcd(A.getTu(), A.getMau());
    cout << A.getTu() / gcd << "/" << A.getMau() / gcd << endl;
}