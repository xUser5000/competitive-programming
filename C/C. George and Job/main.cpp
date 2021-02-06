#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
const int MAX = 5e3 + 5;

int n, m, k;
int arr[MAX];
map<int,int> mp;

ll solve (int i, int rem) {
    if (i == n || rem == 0) return 0;

    int ans = 0;
}

int main()
{

    cin >> n >> m >> k;
    for (int i = 0; i < n; i++) {
        int a; cin >> a;
        mp[a]++;
        arr[i] = a;
    }



    return 0;
}
