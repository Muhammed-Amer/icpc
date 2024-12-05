#include <iostream>
using namespace std;
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b, c, d;
    cin >> a >> b >> c >> d;
        
    long long result = (static_cast<long long>(a) * b) - (static_cast<long long>(c) * d);
    
    cout << "DIFERENCA = " << result << endl;
    
    return 0;
}