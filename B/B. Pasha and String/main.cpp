#include <iostream>

using namespace std;

int main()
{

    string s; cin >> s;
    int n = s.size();
    int arr[n+1] = {0};
    int q; cin >> q;
    while (q--) {
        int l; cin >> l;
        int r = n-l+1;
        l--, r--;
        arr[l]++;
        arr[r+1]--;
    }

    for (int i = 1; i < n+1; i++) arr[i] += arr[i-1];

    for (int i = 0; i < n/2; i++) {
        if (arr[i] % 2 == 1) {
            int l = i;
            int r = n-1-l;
            swap(s[l], s[r]);
        }
    }

    cout << s;

    return 0;
}
