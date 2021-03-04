#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

struct Operation {
    ll l, r, d;
};

int main()
{

    ll n, m, k; cin >> n >> m >> k;
    ll arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];

    Operation operations[(int) 1e5 + 5];
    for (int i = 0; i < m; i++) {
        int a, b, c; cin >> a >> b >> c;
        a--, b--;
        Operation op;
        op.l = a;
        op.r = b;
        op.d = c;
        operations[i] = op;
    }
    ll operations_pre[(int) 1e5 + 5]; // For operations
    memset(operations_pre, 0, sizeof operations_pre);
    for (int i = 0; i < k; i++) {
        int a, b; cin >> a >> b;
        a--; b--;
        operations_pre[a]++;
        operations_pre[b+1]--;
    }
    ll operations_cnt [(int) 1e5 + 5];
    operations_cnt[0] = operations_pre[0];
    for (int i = 0; i < m; i++) {
        operations_cnt[i] = operations_cnt[i-1] + operations_pre[i];
    }

    ll pre[(int) 1e5 + 5];
    memset(pre, 0, sizeof pre);
    for (int i = 0; i < m; i++) {
        Operation op = operations[i];
        ll cnt = operations[i].d * operations_cnt[i];
        pre[ op.l ] += cnt;
        pre[ op.r+1 ] -= cnt;
    }
    for (int i = 1; i < n; i++) pre[i] += pre[i-1];

    for (int i = 0; i < n; i++) {
        cout << arr[i] + pre[i] << " ";
    }

    return 0;
}
