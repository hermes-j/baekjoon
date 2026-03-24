#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;

int main() {
    fast_io;
    int n; cin >> n;
	int cnt = 0;
	for(int b=1; b<500; b++) {
		int asqr = b*b + n;
		int a = sqrt(asqr);
		if(a*a==asqr) {
			cnt++;
		}
	}
	cout << cnt;
    return 0;
} 
