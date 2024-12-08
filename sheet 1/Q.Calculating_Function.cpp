#include <iostream>
using namespace std;
#define endl "\n"

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long n;
    cin >> n;

    if(n % 2 == 0) {
        cout << n/2 << endl;
    } else {
        cout << -(n+1)/2 << endl;
    }
    return 0;
}