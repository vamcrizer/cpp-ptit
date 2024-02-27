#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = (int)1e9 + 7;

class ds{
public:
    int x, y;
    string color;
    ds(int x, int y, string color){
        this->x = x;
        this->y = y;
        this->color = color;
    }
    int perimeter(int x, int y){
        return (x + y) * 2;
    }
    int area(int x, int y){
        return x * y;
    }
    string fcolor(string color){
        transform(color.begin(), color.end(), color.begin(), ::tolower);
        color[0] = toupper(color[0]);
        return color;
    }
    
};
int main(){
    int x, y; cin >> x >> y;
    if (x <= 0 || y <= 0){
        cout << "INVALID";
        return 0;
    }
    string color; cin >> color;
    ds A(x, y, color);
    cout << A.perimeter(A.x, A.y) << " " << A.area(A.x, A.y) << " " << A.fcolor(A.color);
}
