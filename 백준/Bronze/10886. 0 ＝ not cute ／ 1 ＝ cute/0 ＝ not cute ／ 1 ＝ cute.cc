#include <iostream>
using namespace std;
int main()
{
    int n, k;
    int sum = 0;
    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> k;
        sum += k;
    }
    if (sum > n/2) cout << "Junhee is cute!" << endl;
    else cout << "Junhee is not cute!" << endl;
}