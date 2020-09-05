#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main()
{

    double n, t1, t2, k; cin >> n >> t1 >> t2 >> k;
    map<double, vector<double> > mp;
    for (int i = 1; i <= n; i++) {
        double a, b; cin >> a >> b;

        double x = t1 * a * (1 - k / 100) + t2 * b;
        double y = t1 * b * (1 - k / 100) + t2 * a;

        double score = max(x, y);

        mp[score].push_back(i);
    }

    map<double, vector<double> >::reverse_iterator it = mp.rbegin();
    while (it != mp.rend()) {
        pair<double, vector<double> > p = *it;
        double score = p.first;
        vector<double> vc = p.second;

        for (int i = 0; i < (int) vc.size(); i++) {
            printf("%d %.2f\n", (int) vc[i], score);
        }

        it++;
    }

    return 0;
}
