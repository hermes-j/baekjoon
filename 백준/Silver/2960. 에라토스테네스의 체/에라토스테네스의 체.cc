#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;

int main() {
    fast_io;
    ll n, k; cin >> n >> k;
	vector<ll> erased;
	ll arr[n+1] = {0,};
	for(ll i = 2; i <= n; i++) {
		if(arr[i]) continue;
		arr[i] = i;
		erased.push_back(i);
		for(ll j=i*i; j<=n; j+=i) {
			if(arr[j]) continue;
			arr[j] = i;
			erased.push_back(j);
		}
	}
	cout << erased[k-1] << '\n';
    return 0;
}