#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;

ll C[1001][1001];
ll binomial(int n, int k) {
	if(n < k) return 0;
	if(n == k || k == 0) return 1;
	ll &ret = C[n][k];
	if(ret != -1) return ret;
	ret = (binomial(n-1, k) + binomial(n-1, k-1))%10007;
	return ret;
}
int main() {
    fast_io;
    int n, k; cin >> n >> k;
	memset(C, -1, sizeof(C));
	cout << binomial(n, k);
    return 0;
}