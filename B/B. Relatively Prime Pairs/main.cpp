#include <iostream>

using namespace std;

typedef long long ll;

int main()
{

    ll a, b; scanf("%lld %lld", &a, &b);
    printf("YES\n");
    for (ll i = a; i <= b; i += 2) {
        printf("%lld %lld\n", i, i+1);
    }

    return 0;
}
