#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
    cin.tie(NULL); ios_base::sync_with_stdio(false);
    int s[8], res[8];
	for (int i=0; i<8; i++) {
		cin >> s[i];
		res[i] = s[i];
	}
	sort(res, res+8);
	if (equal(s, s+8, res)) {
		cout << "ascending\n";
		return 0;
	}
	sort(res, res+8, greater<int>());
	if (equal(s, s+8, res)) {
		cout << "descending\n";
		return 0;	
	}
	cout << "mixed\n";
	return 0;
} 