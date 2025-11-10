#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
    cin.tie(NULL); ios_base::sync_with_stdio(false);
    int n;
	double p, res;
	cin >> n >> p;
	res = p;
	if (n >= 5) res = p - 500;
	if (n >= 10) res = min(p * 0.9, res);
	if (n >= 15) res = min(p - 2000, res);
	if (n >= 20) res = min(p * 0.75, res);
	cout << max(res, 0.0);
    return 0;
} 