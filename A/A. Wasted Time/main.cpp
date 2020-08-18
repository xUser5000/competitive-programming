#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float n, k; cin >> n >> k;
    pair<float, float> arr[ (int) n];
    for (int i = 0; i < n; i++) {
        int x, y; cin >> x >> y;
        arr[i] = make_pair(x, y);
    }

    float d = 0;
    for (int i = 1; i < n; i++) {
        d += sqrt( pow( arr[i].first - arr[i - 1].first , 2) + pow( arr[i].second - arr[i - 1].second , 2) );
    }

    printf("%.8f", (d / 50) * k);

    return 0;
}
