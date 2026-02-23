#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;

int main() {
    fast_io;
    int h, m; cin >> h >> m;
	int time = 0;
	time += (h-9)*60 + m;
	cout << time;
    return 0;
}