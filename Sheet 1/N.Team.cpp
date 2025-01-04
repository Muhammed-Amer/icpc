#include <iostream>
using namespace std;
#define endl "\n"

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b, c, counter, problems = 0;
    cin >> counter;
    
    for(int i=0; i<counter; i++) {
        cin >> a >> b >> c;
        if(a + b + c >= 2) problems++;
    }

    cout << problems << endl;
    return 0;
}