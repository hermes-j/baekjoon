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
	for(int i=1; i<=n; i++) {
		q.push(i);
	}
	while(!(q.size() == 1)) {
		for(int i=0; i<k; i++) {
			if (i==0) q.push(q.front());
			if (q.size() > 1) q.pop();
		}
	}
	cout << q.front() << "\n";
    return 0;
} 