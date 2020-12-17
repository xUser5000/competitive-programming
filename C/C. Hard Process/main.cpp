#include <iostream>
#include <algorithm>

using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    sort(arr, arr+n);

    int cnt = 0;
    int l = n-1, r = n-1;
    while (r >= 0 && l >= 0) {
        while (arr[l]*2 > arr[r]) l--;
        cnt++;
        r--, l--;
    }

    cout << n-cnt;

    return 0;
}

/*
int n, k; cin >> n >> k;
int arr[n];
for (int i = 0; i < n; i++) cin >> arr[i];

int a = 0, b = 0;
int l = 0, r = 0;
int cnt = 0;
while (l < n) {
    while (r < n && cnt + (arr[r] == 0) <= k) {
        if (arr[r] == 0) cnt++;
        r++;
    }
    if (r-l > b-a) {
        a = l;
        b = r;
    }

    if (arr[l] == 0) cnt--;
    l++;
}

int c = k;
for (int i = a; i < b; i++) {
    if (c == 0) break;
    if (arr[i] == 0) {
        arr[i] = 1;
        c--;
    }
}

cout << b-a << endl;
for (int element: arr) cout << element << " ";
*/
