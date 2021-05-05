#include <bits/stdc++.h>

using namespace std;

const int MAX = 51;
const int oo = 1e9;

int n, s, k;
int arr[MAX];
string color;

int dp[51][2001];
int solve (int i, int rem) {
    //cout << i << " " << rem << "\n";
    if (rem <= 0) return 0;

    int &ans = dp[i][rem];
    if (ans != -1) return ans;

    ans = oo;
    for (int j = 0; j < n; j++) {
        if (arr[j] > arr[i] && color[i] != color[j])
            ans = min(ans, abs(i-j) + solve(j, rem-arr[j]) );
    }

    return ans;
}

int main()
{

    cin >> n >> s >> k;
    s--;
    for (int i = 0; i < n; i++) cin >> arr[i];
    cin >> color;
    memset(dp, -1, sizeof dp);
    int ans = oo;
    for (int i = 0; i < n; i++) {
        ans = min(ans, abs(i-s) + solve(i, k-arr[i]));
    }
    if (ans == oo) cout << -1;
    else cout << ans;
    return 0;
}
