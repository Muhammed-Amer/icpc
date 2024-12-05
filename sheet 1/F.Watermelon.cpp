#include <iostream>
using namespace std;
#define endl "\n"

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int w;
    cin >> w;
    
    if(w%2 == 0 && w >= 4) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
    return 0;
}