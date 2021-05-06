#include <iostream>

using namespace std;

typedef long long ll;

const ll oo = 1e18;

ll n;
ll solve(ll lucky, int fours, int sevens)
{

    // base case
    if (lucky >= n && sevens == fours) return lucky;
    if (fours + sevens >= 10) return oo;

    // transition
    return min(
        solve((lucky*10) + 4, fours+1, sevens),
        solve((lucky*10) + 7, fours, sevens+1)
    );
}

int main()
{

    cout << 3 + '3';

    return 0;
}
