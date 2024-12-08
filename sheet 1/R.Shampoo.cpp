#include <iostream>
using namespace std;
#define endl "\n"

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int v, f, m, t, counter = 0;
    cin >> v >> f >> m >> t;

    while(v > 0) {
        if(v < f) break;
        v -= f;
        counter++;
        if(v < m) break;
        v -= m;
        counter++;
        if(v < t) break;
        v -= t;
        counter++;
    }

    if(counter % 3 == 0) cout << "F\n";
    else if(counter % 3 == 1) cout << "M\n";
    else cout << "T\n";

    return 0;
}