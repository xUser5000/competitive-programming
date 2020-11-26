#include <iostream>

using namespace std;

int main()
{

    int n, k, l, c, d, p, nl, np; cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int volume = k * l;
    int slices = c * d;
    int t = min(slices, min(p / np, volume / nl));
    cout << t / n;

    return 0;
}
