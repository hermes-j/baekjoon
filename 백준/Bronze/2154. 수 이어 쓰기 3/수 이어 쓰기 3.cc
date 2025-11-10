#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
    cin.tie(NULL); ios_base::sync_with_stdio(false);
    ll n;
	cin >> n;
	string str;
	for(int i=1; i<=n; i++) {
		str += to_string(i);
	}
	cout << str.find(to_string(n)) +1 << "\n";
    return 0;
} 