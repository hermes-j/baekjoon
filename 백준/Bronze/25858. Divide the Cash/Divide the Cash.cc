#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;

int main() {
    fast_io;
    int n, d; cin >> n >> d;
	int a[n]; int sum = 0;
	for(int i=0; i<n; i++) {
		cin >> a[i];
		sum += a[i];
	}
	int r = d / sum;
	for(auto &p : a) {
		cout << p * r << "\n";
	}
    return 0;
} 
