#include <iostream>
using namespace std;
#define endl "\n"

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t, a = 0, d = 0;
    string games;

    cin >> t >> games;

    for(char ch: games) {
        if(ch == 'A') a++;
        else d++;
    }

    if(a > d) cout << "Anton\n";
    else if(a < d) cout << "Danik\n";
    else cout << "Friendship\n";
    
    return 0;
}