#include <iostream>
#include <vector>

using namespace std;

int main()
{

    int t;
    cin>>t;

    int solution [t];

    for (int i = 0; i < t; i++) {
        long n, m, a, d;
        cin>>n>>m>>a>>d;

        int counter = 0;
        for (long c = n; c <= m; c++) {
            if (
                c % a != 0 &&
                c % (a + d) != 0 &&
                c % (a + 2 * d) != 0 &&
                c % (a + 3 * d) != 0 &&
                c % (a + 4 * d) != 0
            ) { counter++; }
        }

        solution[i] = counter;
    }

    for (int i = 0; i < t; i++) cout<<solution[i]<<endl;

    return 0;
}
