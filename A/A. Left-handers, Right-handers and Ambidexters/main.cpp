#include <iostream>

using namespace std;

int main()
{
    int l, r, a; cin>>l>>r>>a;

    if (l > r) {
        if (a < l - r) {
            r += a;
            a = 0;
        } else if (a == l - r) {
            r = l;
            a = 0;
        } else {
            a -= l - r;
            l = r;
        }
    } else if (r > l) {
        if (a < r - l) {
            l += a;
            a = 0;
        } else if (a == r - l) {
            l = r;
            a = 0;
        } else {
            a -= r - l;
            r = l;
        }
    }

    if (a != 0) {
        l += a / 2;
        r += a / 2;
    }

    cout<<min(l, r) * 2;

    return 0;
}
