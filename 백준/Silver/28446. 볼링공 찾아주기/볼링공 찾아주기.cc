#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;

int main() {
    fast_io;
    int m; cin >> m;
	map<int, int> mp;
	while(m--) {
		int op; cin >> op;
		if(op==1){
			int x, w; cin >> x >> w;
			mp[w] = x;
		}else{
			int w; cin >> w;
			cout << mp[w] << '\n';
		}
	}
    return 0;
}