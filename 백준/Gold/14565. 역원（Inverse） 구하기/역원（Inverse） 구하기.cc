#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;

tuple<ll,ll,ll> xGCD(ll a, ll b) {
	if(!b) return make_tuple(a, 1, 0);
	ll g, x, y;
	tie(g, x, y) = xGCD(b, a%b);
	return make_tuple(g, y, x-(a/b)*y);
}

int main() {
    fast_io;
    ll n, a; cin >> n >> a;

	// 덧셈역
	cout << n-a << ' ';

	// 곱셈역
	ll res;
	auto [g, x, y] = xGCD(n, a);
	if(g != 1) res = -1;
	else {
		y = (y%n+n)%n;
		res = y;
	}
	cout << res;
    return 0;
} 