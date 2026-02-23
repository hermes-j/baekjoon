#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;

int main() {
    fast_io;
    int t, n, f, fsum=0;
	cin >> t >> n;
	for(int i=0; i<n; i++) {
		cin >> f;
		fsum += f;
	}
	cout << "Padaeng_i ";
	if(fsum >= t) cout << "Happy";
	else cout << "Cry"; 
    return 0;
}