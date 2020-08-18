#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double d, h, v, e; cin >> d >> h >> v >> e;

    double area = (d / 2) * (d / 2) * (22 / 7);

    if (e * area > v) cout << "NO";
    else printf("YES\n%.8f", area * h / (v - e * area));

    return 0;
}
