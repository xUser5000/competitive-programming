#include <iostream>
#include <cmath>
#include <limits.h>

using namespace std;

const double PI = 3.141592653589793238462643383279;

double calc (double r1, double p1, double p2, double a, double b) {
    return r1 * sqrt( (b * p1) / ( (b * p1) + (a * p2) ) );
}

int main()
{

    double n; cin >> n;
    double r1 = 0;
    while (n--) {
        double x; cin >> x;
        r1 = max(r1, x);
    }
    int m; cin >> m;
    double arr[m];
    for (int i = 0; i < m; i++) cin >> arr[i];

    double k; cin >> k;
    double p2 = LONG_MAX;
    while (k--) {
        double x; cin >> x;
        p2 = min(p2, x);
    }

    double a, b; cin >> a >> b;

    double ans = 0;

    for (int i = 0; i < m; i++) {
        double p1 = arr[i];
        ans = max(ans, calc(r1, p1, p2, a, b));
    }

    cout.precision(9);

    cout << ans;

    return 0;
}
