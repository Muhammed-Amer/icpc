#include <iostream>
#include<iomanip>
using namespace std;
#define endl "\n"

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    float a, b, c;
    cin >> a >> b >> c;

    cout << fixed << setprecision(1);
    double result = (a*2 + b*3 + c*5)/10;

    cout << "MEDIA = " <<result << endl;
    return 0;
}