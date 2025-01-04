#include <iostream>
using namespace std;
#define endl "\n"

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t, n;
    long long k;
    cin >> t; 

    while(t) {
        cin >> n >> k;
        if(n >= k*k && n % 2 == k % 2) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
        t--;
    }
    return 0;
}