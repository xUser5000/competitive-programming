#include <iostream>
#include <vector>

using namespace std;

int main()
{

    int n, b, d;
    cin>> n>> b>> d;
    vector<int> oranges;
    for (int i = 0; i < n; i++) {
        int num;
        cin>>num;
        if (num <= b) oranges.push_back(num);
    }

    int total = 0;
    int solution = 0;
    for (int i = 0; i < oranges.size(); i++) {
        total += oranges[i];

        if (total > d) {
            total = 0;
            solution++;
        }
    }

    cout<<solution;

    return 0;
}
