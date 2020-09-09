#include <iostream>
#include <cstring>

using namespace std;

int n;
int arr[105];

int dp[105][3];

int work (int i, int last_day) {

    if (dp[i][last_day] != -1) return dp[i][last_day];

    int ret = 0;

    if (arr[i] == 0 || arr[i] == last_day) ret = work(i + 1, 0);
    else {
        if (arr[i] == 3) {
            if (last_day == 1) ret = 1 + work(i + 1, 2);
            else if (last_day == 2) ret = 1 + work(i + 1, 1);
            else ret = 1 + max( work(i + 1, 1), work(i + 1, 2));
        }
        else ret = 1 + work(i + 1, arr[i]);
    }

    dp[i][last_day] = ret;

    return ret;

}

int main()
{

    cin >> n;
    for (int i = 0; i < n; i++) cin >> arr[i];

    memset(dp, -1, sizeof dp);
    dp[n][0] = 0;
    dp[n][1] = 0;
    dp[n][2] = 0;

    cout << n - work(0, 0);

    return 0;
}
