#include <iostream>
using namespace std;
int main() {
    int n, a, d, g, score;
    int max=0;
    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> a >> d >> g;
        score = a*(d+g);
        if(a == d+g) score*=2;
        if(score>max) max = score;
    }
    cout << max << "\n";
}