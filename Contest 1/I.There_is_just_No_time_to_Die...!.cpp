#include<iostream>
#include<iomanip>
using namespace std;
#define endl "\n"

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string k;
    int n;

    cin >> k >> n;
    
    double combined_rate = 0.0;

    while(n) {
        int tap;
        cin >> tap;

        double rate = 1.0 / tap;
        combined_rate += rate;

        n--;
    }

    double time = 1/combined_rate;

    cout << fixed << setprecision(6) << time << endl;
    return 0;
}