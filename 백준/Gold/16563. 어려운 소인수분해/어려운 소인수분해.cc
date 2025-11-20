#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;

const int MAX = 5000000;
vector<int> primes, arr(MAX+1);

void eratos(int n) {
	for(ll i = 2; i <= n; i++) {
		if(arr[i]) continue;
		arr[i] = i;
		primes.push_back(i);
		for(ll j=i*i; j<=n; j+=i) {
			if(arr[j]) continue;
			arr[j] = i;
		}
	}
}

int main() {
    fast_io;
    int n; cin >> n;
	eratos(MAX);
	while(n--) {
		int k; cin >> k;
		while(k!=1) {
			cout << arr[k] << ' ';
			k /= arr[k];
		}
		cout << '\n';
	}
    return 0;
}