#include <iostream>
using namespace std;
#define endl "\n"

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b, c, counter;
    cin >> counter;

    for(int i=0; i<counter; i++) {
        cin >> a >> b >> c;
        if(a+b == c || a+c == b || b+c == a) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}