#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;

int main() {
    fast_io;
    int a, b, c; cin >> a >> b >> c;
    if(a+b==c) cout << "correct!";
    else cout << "wrong!";
    return 0;
}