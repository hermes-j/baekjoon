#include <bits/stdc++.h>
#define fast_io cin.tie(NULL); ios_base::sync_with_stdio(false);
using namespace std;

int main() {
    fast_io;
    int n, m, i, j, k;
    cin >> n >> m;
    int basket[100] = { 0 };
    for (int a = 0; a < m; a++) {
        cin >> i >> j >> k;
        for (i; i <= j;i++) {
            basket[i] = k;
        }
    }
    for (int a = 1; a <= n; a++) {
        cout << basket[a] << ' ';
    }
}