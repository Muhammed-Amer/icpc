#include <iostream>
using namespace std;
#define endl "\n"

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int k, r;
    cin >> k >> r;

    int price = k;

    int shovels = 0;
    while(1) {
        if(price % 10 == r || price % 10 == 0) {
            shovels++;
            break;
        } else {
            price += k;
            shovels++;
        }
    }

    cout << shovels << endl;

    return 0;
}