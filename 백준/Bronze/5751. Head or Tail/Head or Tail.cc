#include <iostream>
using namespace std;

int main()
{
    int n, r;
    while(1) {
        int x=0, y=0;
        cin >> n;
        if (n==0) break;
        for(int i=0; i<n; i++) {
            cin >> r;
            if (r==0) x++;
            if (r==1) y++;
        }
        cout << "Mary won " << x << " times and John won " << y << " times" << endl; 
    }
}