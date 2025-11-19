#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;

int main() {
    fast_io;
    int n, k; cin >> n >> k;
	vector<int> v(n);
	int maxTemp = -987654321;
	int sum = 0;
	int windowSize = 0;
	for(int i=0; i<n; i++) {
		cin >> v[i];
	}
	for(int i=0; i<n; i++) {
		if (windowSize == k) {
			sum -= v[i-k];
			sum += v[i];
			maxTemp = max(maxTemp, sum);
		}
		else {
			windowSize++;
			sum += v[i];
			if(windowSize == k) maxTemp = max(maxTemp, sum);
		}
	}
	cout << maxTemp;
    return 0;
}