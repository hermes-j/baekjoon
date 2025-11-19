#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;

int n, l;
deque<pii> dq;
vector<int> v, res;

int main() {
    fast_io;
    cin >> n >> l;
	for(int i=0; i<n; i++) {
		int a; cin >> a;
		v.push_back(a);
	}
	for(int i=0; i<n; i++) {
		while(!dq.empty() && v[i] <= dq.back().second) dq.pop_back();
		dq.emplace_back(i, v[i]);
		if(dq.front().first < i-l+1) dq.pop_front();
		res.push_back(dq.front().second);
	}
	for(auto a : res) cout << a << " ";
    return 0;
}