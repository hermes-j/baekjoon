#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;

int main() {
    fast_io;
    int n, m; cin >> n >> m;
	multiset<int> mset;
	for(int i=0; i<n; i++) {
		int k; cin >> k;
		mset.insert(k);
	}
	bool ok = 1;
	for(int i=0; i<m; i++) {
		int k; cin >> k;
		auto it = mset.end(); // 맨 끝 포인터 (multiset은 자동정렬)
		it--; // 마지막 요소 가리킴
		if(*it >= k) {
			auto tmp = *it - k;
			mset.erase(it);
			if(tmp) mset.insert(tmp);
		}
		else ok = 0;
	}
	cout << ok;
    return 0;
} 