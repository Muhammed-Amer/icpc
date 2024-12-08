#include <iostream>
using namespace std;
#define endl "\n"

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int k, n, w;
    cin >> k >> n >> w;

    long long cost = 0;

    // O(n)
    // for(int i=1; i<=w; i++) {
    //     cost += (k*i);
    // }

    // O(1) 
    cost = k * w*(w + 1)/2;

    if(cost <= n) cout << 0 << endl;
    else cout << cost - n << endl;


    return 0;
}