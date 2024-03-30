#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = (int)1e9 + 7;

int main(){
    int t; cin >> t;
    while(t--){
    int a[3][3];
    int ax,ay,az,bx,by,bz,cx,cy,cz,dy,dx,dz;
    cin >> ax >> ay >> az >> bx >> by >> bz >> cx >> cy >> cz >> dx >> dy >> dz;
    int ABx, ABy, ABz, ACx, ACy, ACz, ADx, ADy, ADz;
    vector<int> ve;
    ABx = bx - ax;
    ve.push_back(ABx);
    ABy = by - ay;
    ve.push_back(ABy);
    ABz = bz - az;
    ve.push_back(ABz);
    ACx = cx - ax;
    ve.push_back(ACx);
    ACy = cy - ay;
    ve.push_back(ACy);
    ACz = cz - az;
    ve.push_back(ACz);
    ADx = dx - ax;
    ve.push_back(ADx);
    ADy = dy - ay;
    ve.push_back(ADy);
    ADz = dz - az;
    ve.push_back(ADz);
    int stt = 0;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            a[i][j] = ve[stt++];
        }
    }
    int det = (a[0][0] * a[1][1] * a[2][2] + a[1][0] * a[2][1] * a[0][2] + a[0][1] * a[1][2] * a[2][0]) - (a[0][2] * a[1][1] * a[2][0] + a[1][0] * a[0][1] * a[2][2] + a[2][1] * a[1][2] * a[0][0]);
    if (det == 0){
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
    cout << endl;
    }
}