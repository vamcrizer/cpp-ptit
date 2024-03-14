#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

class Rectangle{
	public:
		int length, width;
		string color;
		Rectangle(int tre, int em, string minor);
		friend void normalizer(Rectangle&);
		friend istream& operator >> (istream &in, Rectangle &a);
};

Rectangle::Rectangle(int tre, int em, string minor){
	length = tre;
	width = em;
	color = minor;
}

istream& operator >> (istream &in, Rectangle &a){
	cin >> a.length >> a.width >> a.color;
	return in;
}

void normalizer(Rectangle &a){
	a.color[0] = toupper(a.color[0]);
	for(int i = 1; i < a.color.size(); i++){
		a.color[i] = tolower(a.color[i]);
	}
}

bool check(Rectangle &a){
	return a.length > 0 && a.width > 0;
}

ll p(int l, int w){
	return 1ll * (l + w) * 2;
}

ll s(int l, int w){
	return 1ll * l * w;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	Rectangle a(69, 420, "gay");
	cin >> a;
	if(check(a)){
		normalizer(a);
		cout << p(a.length, a.width) << " " << s(a.length, a.width) << " " << a.color;
	} else cout << "INVALID";
	// Biden
	return 0;
}
