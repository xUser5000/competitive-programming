#include <iostream>
#include <cstring>

using namespace std;

const int MAX = 1e5 + 5;

int gcd (int a, int b) {
    if (b == 0) return a;
    return gcd(b, a%b);
}

int n;
int arr[MAX];

int dp[MAX];
int solve (int i) {
    if (i == n) return 0;

    if (dp[i] != -1) return dp[i];

    int ans = 1;
    for (int j = i+1; j < n; j++) {
        if (gcd(arr[i], arr[j]) > 1) ans = max(ans, 1 + solve(j));
    }

    return dp[i] = ans;
}

int main()
{

    cin >> n;
    for (int i = 0; i < n; i++) cin >> arr[i];
    memset(dp, -1, sizeof dp);

    int ans = 1;
    for (int i = 0; i < n; i++) {
        ans = max(ans, solve(i));
    }

    cout << ans;

    return 0;
}
