#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;

int kipa(int n) {
	int happy = 0;
	while(n>9) {
		int mul=1;
		while(n>0) {
			mul*=n%10;
			n/=10;
		}
		n = mul;
		happy++;
	}
	return happy;
}

int main() {
    fast_io;
    int n; cin >> n;
	cout << kipa(n);
    return 0;
} 
