#include <iostream>
using namespace std;
#define endl "\n"

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    if((n%10) % (n/10) == 0 || 
       (n/10) % (n%10) == 0) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
    return 0;
}