#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
    cin.tie(NULL); ios_base::sync_with_stdio(false);
    ll L, t;
	cin >> L;
	t = L/5;
	if (L%5) t++;
	cout << t;
    return 0;
} 