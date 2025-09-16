#include <bits/stdc++.h>
using namespace std;

int main() {
	string str;
	cin >> str;
	string rev = str;
	reverse(rev.begin(), rev.end());
	if (str.compare(rev) == 0) cout << 1;
	else cout << 0;
	return 0;
}