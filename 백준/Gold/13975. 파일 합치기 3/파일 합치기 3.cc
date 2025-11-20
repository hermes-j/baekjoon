#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;

ll n, k;

int main() {
    fast_io;
    cin >> n;
	while(n--) {
		ll sum = 0;
		cin >> k;
		priority_queue<ll, vector<ll>, greater<ll>> pq;
		for(int i=1; i<=k; i++) {
			int temp; cin >> temp;
			pq.push(temp);
		}
		while(pq.size() != 1) {
			ll temp = pq.top();
			pq.pop();
			ll temp2 = pq.top();
			pq.pop();
			sum += temp + temp2;
			pq.push(temp+temp2);
		}
		cout << sum << '\n';
	}
    return 0;
}