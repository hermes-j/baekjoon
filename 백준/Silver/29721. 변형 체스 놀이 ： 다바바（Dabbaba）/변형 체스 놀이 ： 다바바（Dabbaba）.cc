#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;

const int dx[] = {-2, 2, 0, 0};
const int dy[] = {0, 0, -2, 2};

int main() {
    fast_io;
	int n, k;
	cin >> n >> k;
	vector<pii> coordinates(k);
    set<pii> st;
	for(int i=0; i<k; i++) {
		int x, y;
		cin >> x >> y;
		coordinates[i] = {x, y};
		st.insert(coordinates[i]);
	}

	for(int i=0; i<k; i++) {
		auto [x, y] = coordinates[i];
		for(int j=0; j<4; j++) {
			int nx = x + dx[j];
			int ny = y + dy[j];
			if(1 <= nx && nx <= n && 1 <= ny && ny <= n) 
				st.insert({nx, ny});
		}
	}

	cout << st.size() - k;
    return 0;
} 