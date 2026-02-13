#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;

int main() {
    fast_io;
    int s, e; cin >> s >> e;
	int res = e - s;
	if(res<0) res += 24;
	cout << res;
    return 0;
}