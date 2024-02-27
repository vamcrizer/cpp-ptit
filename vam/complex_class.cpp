#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Complex{
private:
 int real;
 int imaginary;
public:
  Complex(int real, int imaginary){
    this->real = real;
    this->imaginary = imaginary;
  }
  Complex operator + (Complex const &obj) {
         Complex res(0,0);
         res.real = real + obj.real;
         res.imaginary = imaginary + obj.imaginary;
         return res;
    }
    Complex operator * (Complex const &obj) {
        Complex res(0,0);
        res.real = real*obj.real - imaginary*obj.imaginary;
        res.imaginary = real*obj.imaginary + imaginary*obj.real;
        return res;
}

  void print(){
    if (imaginary < 0){
        cout << real << " " << "-" << " " << abs(imaginary) << "i";
    } else {
    cout << real << " + " << imaginary << "i";
    }
  }
};

int main(){
    int t; cin >> t;
    while(t--){
        int real, im, real2, im2;
        cin >> real >> im >> real2 >> im2;
    Complex c1(real, im), c2(real2, im2);
    Complex c3 = (c1 + c2) * c1;
    Complex c4 = (c1 + c2) * (c1 + c2);
    c3.print();
    cout << ", ";
    c4.print();
    cout << endl;
    }
    return 0;
}
