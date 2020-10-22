#include <iostream>

using namespace std;

int main()
{

    string a; cin >> a;
    int n = a.size();
    int k; cin >> k;

    for (int i = 0; i < n; i++) {
        int mx = a[i];
        int index = -1;
        if (k == 0) break;
        for (int j = i+1; j < n && j <= i+k; j++) {
            if (mx < a[j]) {
                mx = a[j];
                index = j;
            }
        }
        if (mx == a[i]) continue;

        k = k - (index-i);
        for (int j = index; j >= i+1; j--) {
            swap(a[j], a[j-1]);
        }
    }

    cout << a;

    return 0;
}
