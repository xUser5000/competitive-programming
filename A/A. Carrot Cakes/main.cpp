#include <iostream>
#include <math.h>

using namespace std;

int main()
{

    int n, t, k, d;
    cin>> n >> t >> k >> d;

    int o1 = 0, o2 = d;

    for (int i = 0; i <= n; i++) {
        if (o1 > o2) o1 += t;
        else o2 += t;
    }

    if (o1 >= o2) cout<< "NO";
    else cout<<"YES";

    return 0;
}
