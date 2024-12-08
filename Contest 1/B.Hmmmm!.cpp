#include <iostream>
using namespace std;
#define endl "\n"

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t, a, b;
    long long sum = 0;

    cin >> t >> a >> b;

    while(t) {
        int n;
        cin >> n;

        if(n >= a && n <= b) {
            sum += n; 
        }

        t--;
    }

    cout << sum << endl;
    
    return 0;
}