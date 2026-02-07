#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;

int main() {
    fast_io;
    string a, b;
	cin >> a >> b;
	if(a.length() >= b.length()) cout << "go" << "\n";
	else cout << "no" << "\n";
    return 0;
} 
