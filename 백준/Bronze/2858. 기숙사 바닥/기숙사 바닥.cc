#include <iostream>
using namespace std;

int main()
{
    int r, b, l, w;
    cin >> r >> b;
    w = 2;
    while(1) {
        l = (r+b)/w;
        if(r == 2*l + 2*w - 4 && ((r+b)%w == 0)) break;
        w++;
    }
    cout << l << " " << w;
}