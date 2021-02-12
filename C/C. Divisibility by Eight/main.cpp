#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

typedef long long ll;
const int MAX = 105;

string s;
int n;

ll me (ll x, ll n, ll m) {
    if (n == 0) return 1;
    else if (n % 2 == 0) return me( (x*x)%m, n/2, m );
    else return ( x * me( (x*x)%m, (n-1)/2, m ) ) % m;
}

string dp[MAX][MAX][8];
string solve (ll i, ll cnt, ll sum) {
    if (i < 0) {
        if (sum == 0) return "";
        return "?";
    }

    if (dp[i][cnt][sum] != "!") return dp[i][cnt][sum];

    ll num = ( ( (s[i] - '0') % 8) * me(10, cnt, 8) ) % 8;
    string ans = "?";
    string a = solve(i-1, cnt, sum);
    string b = solve(i-1, cnt+1, ( num%8 + sum%8 ) % 8);

    if (a != "?") ans = a;
    if (b != "?") ans = b + s[i];

    return dp[i][cnt][sum] = ans;
}

int main()
{

    cin >> s;
    n = s.size();
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= n; j++) {
            for (int k = 0; k < 8; k++) {
                dp[i][j][k] = "!";
            }
        }
    }
    string ans = solve(n-1, 0, 0);
    if (ans == "?" || ans == "") cout << "NO";
    else cout << "YES\n" << ans;

    return 0;
}
