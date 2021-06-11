#include <iostream>

using namespace std;

int main()
{

    int n, k, t; cin >> n >> k >> t;
    int c = n*t;
    int first = c/100;
    for (int i = 0; i < first; i++) cout << k << " ";

    int rem = t*n*k/100-first*k;
    if (rem != 0) cout << rem << " ";

    int num = rem == 0 ? n-first : n-first-1;
    for (int i = 0; i < num; i++) cout << 0 << " ";

    return 0;
}
