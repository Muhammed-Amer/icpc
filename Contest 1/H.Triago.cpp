#include <iostream>
#include <cmath>
using namespace std;
#define endl "\n"

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while (t)
    {
        long long n, m;
        cin >> n >> m;
        long long sum = n*(n+1)/2;

        // sum of all powers of m
        long long y = 0;

        for(long long i = 1; i<=n; i*=m) {
            y += i;
        }

        cout << sum - 2 * y << endl;
        t--;
    }
    
    return 0;
}