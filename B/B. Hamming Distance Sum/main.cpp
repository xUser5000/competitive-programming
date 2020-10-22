#include <iostream>

using namespace std;

typedef long long ll;

int main()
{

    string a, b; cin >> a >> b;

    int x = a.size();
    int y = b.size();

    long long ans = 0;
    for (int i = 0; i <= y-x; i++) {
        for (int j = 0; j < x; j++) {
            int l = a[j] - '0';
            int k = b[i+j] - '0';
            ans += abs(l-k);
        }
    }

    cout << (long long) ans;

    return 0;
}
