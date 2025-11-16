#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;

int n, k;
queue<int> q;

int main() {
    fast_io;
    
	cin >> n >> k;
	vector<int> result;
	for(int i=1; i<=n; i++) {
		q.push(i);
	}
	while(!q.empty()) {
		for(int i=1; i<k; i++) {
			q.push(q.front());
			q.pop();
		}
		result.push_back(q.front());
		q.pop();
	}
	cout << "<";
	for(auto v : result) {
		cout << v << (v == result.back() ? ">\n" : ", ");
	}
    return 0;
} 