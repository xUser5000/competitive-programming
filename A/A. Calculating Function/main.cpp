#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    long long n; cin >> n;

    long long a = ceil( (double) n / 2);

    if (n % 2 == 0) cout << a;
    else cout << -a;

    return 0;
}
