#include <bits/stdc++.h>
#define fast_io cin.tie(NULL); ios_base::sync_with_stdio(false);
using namespace std;

int main() {
    fast_io;
    int num;
    int number[30] = { 0 };
    for (int i=0; i <28; i++) {
        cin >> num;
        number[num-1] = 1;
    }
    for (int i = 0; i < 30; i++) {
        if (number[i] == 0) cout << i + 1 << endl;
    }
}