#include <iostream>
#include <cstring>

using namespace std;

const int MAX = 1e4 + 5;

int n, k;
int arr[105];

int dp[105][MAX];
int solve (int i, int rem) {
    if (i == n) return 0;

    if (dp[i][rem] != -1) return dp[i][rem];

    int ans = 0;
    int a = 0, b = 0;
    a = solve(i+1, rem);
    if (rem >= (n-i)*arr[i]) b = 1 + solve(i+1, rem - (n-i)*arr[i]);

    ans = max(a, b);

    //printf("%d %d %d %d\n", i, a, b, ans);

    return dp[i][rem] = ans;
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    cin >> n >> k;
    for (int i = 0; i < n; i++) cin >> arr[i];
    memset(dp, -1, sizeof dp);
    cout << solve(0, k);

    return 0;
}
