#include <bits/stdc++.h>

using namespace std;

int divisors[(int) 1e5];

void sieve (int n) {
    for (int i = 0; i < n; i++) divisors[i] = 1;
    divisors[0] = divisors[1] = 1;
    for (int i = 2; i*i <= n; i++) {
        for (int j = i; j <= n; j += i) divisors[j]++;
    }
}

int main()
{

    sieve(1e5 - 5);
    int n; cin >> n;
    vector<int> ans;
    for (int i = 2; i <= n; i++) {
        if (divisors[i] <= 3) ans.push_back(i);
    }

    cout << (int) ans.size() << "\n";
    for (int i: ans) cout << i << " ";

    return 0;
}
