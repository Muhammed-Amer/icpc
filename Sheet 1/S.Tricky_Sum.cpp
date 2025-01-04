#include <iostream>
#include <cmath>
using namespace std;
#define endl "\n"

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int counter, n;
    cin >> counter;


    for(int i=0; i<counter; i++) {
        cin >> n;
        long long result = (long long)n * (n+1)/2;

        long long power = 1;
        
        while (power <= n) {
            result -= 2 * power;
            power <<= 1;
        }

        cout << result << endl;
    }

    return 0;
}