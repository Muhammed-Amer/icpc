#include <iostream>
using namespace std;
#define endl "\n"

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while(t) {
        int a, b, c;
        cin >> a >> b >> c;
        
        if(a == b) cout << c << endl;
        else if(a == c) cout << b << endl;
        else cout << a << endl;
        t--;
    }


    return 0;
}