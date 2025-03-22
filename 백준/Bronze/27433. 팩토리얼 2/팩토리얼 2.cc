#include <iostream>

using namespace std;

int main()
{
    int n;
    long res = 1;
    cin >> n;
    while(n > 0) {
        res *= n;
        n--;
    }
    cout << res;
}