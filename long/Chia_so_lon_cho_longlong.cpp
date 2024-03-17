str chia(str a, ll b){
	ll tmp = 0, n = a.size();
	str r = "";
	for(int i=0; i<n; i++){
		tmp = tmp*10 + (a[i] - '0');
		ll x = tmp/b;
		tmp %= b;
		r += (x + '0');
	}
	while(r.size() > 1 && r[0]=='0'){
		r.erase(0, 1);
	}return r;
}