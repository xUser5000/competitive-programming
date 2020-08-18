#include <iostream>

using namespace std;

typedef unsigned long long ll;

int main()
{

    ll n, k; cin >> n >> k;
    ll mid = (n % 2 == 0) ? (n / 2) : (n / 2 + 1);

    if (k > mid) cout << (k - mid) * 2;
    else cout << k * 2 - 1;

    return 0;
}
