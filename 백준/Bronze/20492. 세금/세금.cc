#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;

int main() {
    fast_io;
    int n; cin >> n;
	int res1, res2;
	res1 = n * 0.78;
	res2 = n * 0.8 + n * 0.2 * 0.78;
	cout << res1 << " " << res2 << "\n";
    return 0;
}