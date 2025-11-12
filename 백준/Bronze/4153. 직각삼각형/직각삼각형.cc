#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
    cin.tie(NULL); ios_base::sync_with_stdio(false);
    vector<ll> a(3); 
	while(1) {
		for(auto& i : a) cin >> i;
		if (a[0] == 0 || a[1] == 0 || a[2] == 0) break;
		sort(a.begin(), a.end());
		if (a[0]*a[0] + a[1]*a[1] == a[2]*a[2]) {
			cout << "right\n";
		} else {
			cout << "wrong\n";
		}
	}
    return 0;
} 