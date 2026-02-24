#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;

int main() {
    fast_io;
    int n, year;
	string dept;
	cin >> n;
	while(n--) {
		cin >> dept >> year;
		if(year==2026) cout << dept;
	}
    return 0;
}