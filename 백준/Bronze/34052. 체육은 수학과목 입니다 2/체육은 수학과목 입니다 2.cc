#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;

int main() {
    fast_io;
    int t, sum=0;
    for(int i=0; i<4; i++) {
        cin >> t;
        sum += t;
    }
    if(sum<=1500) cout << "Yes" << "\n";
    else cout << "No" << "\n";
    return 0;
}