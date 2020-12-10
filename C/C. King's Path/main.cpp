#include <iostream>
#include <set>
#include <map>
#include <queue>

using namespace std;

typedef long long ll;

set< pair<int,int> > allowed, vis;
map< pair<int,int>, int> len;

bool valid (int x, int y) {
    return allowed.find({x, y}) != allowed.end() && vis.find({ x, y }) == vis.end();
}

int dx [] = { -1, -1, -1, 0, +1, +1, +1, 0 };
int dy [] = { -1, 0, +1, +1, +1, 0, -1, -1 };
int bfs (pair<int,int> p0, pair<int,int> p1) {
    queue< pair<int,int> > q;
    q.push(p0);
    vis.insert(p0);
    len[p0] = 0;

    while (!q.empty()) {
        pair<int,int> node = q.front();
        q.pop();

        for (int k = 0; k < 8; k++) {
            if (valid(node.first + dx[k], node.second + dy[k])) {
                pair<int,int> newpt = make_pair(node.first + dx[k], node.second + dy[k]);
                q.push(newpt);
                vis.insert(newpt);
                int length = len[node] + 1;
                len[newpt] = length;

                if (newpt.first == p1.first && newpt.second == p1.second) {
                    return length;
                }
            }
        }
    }

    return -1;
}

int main()
{

    int x0, y0, x1, y1; cin >> x0 >> y0 >> x1 >> y1;
    int n; cin >> n;
    while (n--) {
        int r, a, b; cin >> r >> a >> b;
        for (int k = a; k <= b; k++) {
            allowed.insert({ r, k });
        }
    }

    cout << bfs({x0, y0}, {x1, y1});

    return 0;
}
