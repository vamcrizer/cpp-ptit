#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Point{
public:
    double x, y;
};
class Triangle{
public:
    Point p1, p2, p3;
    Triangle (Point p1, Point p2, Point p3) : p1(p1), p2(p2), p3(p3){}
    double permeter(){
        double a = sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
        double b = sqrt(pow(p3.x - p2.x, 2) + pow(p3.y - p2.y, 2));
        double c = sqrt(pow(p1.x - p3.x, 2) + pow(p1.y - p3.y, 2));
        if (a <= 0 || b <= 0 || c <= 0){
            return -1;
        }
        double p = (a+b+c)/2;
        if (a + b <= c || b + c <= a || a + c <= b){
            return -1;
        } else {
            return sqrt(p*(p-a)*(p-b)*(p-c));
        }
    }
};

int main(){
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);cout.tie(NULL);
    int t; cin >> t;
    while(t--){
    double x1,y1,x2,y2,x3,y3; cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    Point p1, p2, p3;
    p1.x = x1, p1.y = y1;
    p2.x = x2, p2.y = y2;
    p3.x = x3, p3.y = y3;
    Triangle triangle(p1,p2,p3);
    double per = triangle.permeter();
    if (per == -1){
        cout << "INVALID\n";
    } else {
        cout << fixed << setprecision(3) << per << endl;
    }
    }

}