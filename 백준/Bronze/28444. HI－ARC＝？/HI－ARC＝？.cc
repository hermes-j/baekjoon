#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;

int main() {
    fast_io;
    int h,i,a,r,c; cin >> h >> i >> a >> r >> c;
    cout << h*i - a*r*c << "\n";
    return 0;
} 