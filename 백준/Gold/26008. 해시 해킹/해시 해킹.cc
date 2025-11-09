#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
    cin.tie(NULL); ios_base::sync_with_stdio(false);
    ll n, m, a, h;
	cin >> n >> m >> a;
	cin >> h;
	ll res= 1;
	for(int i=0; i<n-1; i++) {
		res *= m;
		res %= 1000000007;
	}
	cout << res;
    return 0;
} 