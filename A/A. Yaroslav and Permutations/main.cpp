#include <iostream>
#include <math.h>
#include <map>

using namespace std;

int main()
{

    int n; cin >> n;
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        int a; cin >> a;
        if (mp.find(a) == mp.end()) mp[a] = 1;
        else mp[a]++;
    }

    int f = 0;
    for (pair<int, int> p: mp) f = max(f, p.second);

    if (f <= ceil( (float) n / 2 )) cout << "YES";
    else cout << "NO";

    return 0;
}
