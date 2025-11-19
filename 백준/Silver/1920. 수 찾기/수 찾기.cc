#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;

int main() {
    fast_io;
    int n, m; cin >> n;
	set<int> st;
	while(n--) {
		int temp; cin >> temp;
		st.insert(temp);
	}
	cin >> m;
	while(m--) {
		int num; cin >> num;
		cout << st.count(num) << "\n";
	}
    return 0;
}