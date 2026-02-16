#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;

int main() {
    fast_io;
    int n, x; cin >> n >> x;
	int t[n];
	for(int i=0; i<n; i++) {
		cin >> t[i];
	}
	int idx = 0;
	while(1) {
		if(t[idx] < x) break;
		idx++; x++;
		idx %= n;
	}
	cout << idx+1;
    return 0;
} 
