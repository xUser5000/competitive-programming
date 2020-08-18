#include <iostream>
#include <vector>

using namespace std;

bool find(vector<int>, int);

int main()
{

    int arr [4];
    for (int i = 0; i < 4; i++) cin >> arr[i];

    vector<int> re;
    int solution = 0;

    for (int i = 0; i < 4; i++) {
        if (!find(re, arr[i])) re.push_back(arr[i]);
        else solution++;
    }

    cout<<solution;

    return 0;
}

bool find (vector<int> v, int x) {
    for (int i = 0; i < v.size(); i++)
        if (v[i] == x) return true;
    return false;
}
