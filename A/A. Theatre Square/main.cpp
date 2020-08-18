#include <iostream>

using namespace std;

typedef long long ll;

int main()
{

    ll n, m, a; cin >> n >> m >> a;

    if (n % a != 0) n = n + a - (n % a);
    if (m % a != 0) m = m + a - (m % a);

    cout << (m * n) / (a * a);

    return 0;
}
