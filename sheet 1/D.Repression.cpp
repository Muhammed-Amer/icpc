#include <iostream>
using namespace std;
    
#define end "\n"
    
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int a, b, c;
    cin >> a >> b >> c;
        
    if(a+b >= a+c && a+b >= b+c) {
        cout << a + b;
    } else if(b+c >= a+b && b+c >= a+c) {
        cout << b+c;
    } else if(a+c >= a+b && a+c >= b+c) {
        cout << a + c;
    }
    return 0;
}