#include <iostream>
using namespace std;
#define endl "\n"

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b, c;
    cin >> a >> b >> c;

    if(a+b > c && a+c > b && b+c > a) {
        cout << 0 << endl;
    } else {
        if(a+b <= c) cout << c - (a+b) + 1 << endl;
        else if(a+c <= b) cout << b - (a+c) + 1 << endl;
        else if(b+c <= a) cout << a - (b+c) + 1<< endl;
    }
    return 0;
}