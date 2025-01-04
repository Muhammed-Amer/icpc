#include <iostream>
using namespace std;
#define endl "\n"

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    char symbol;
    int counter, value;

    cin >> symbol >> counter;

    for(int i=0; i<counter; i++) {
        cin >> value;
        for(int i=0; i<value; i++) {
            cout << symbol;
        }
        cout << endl;
    }
    return 0;
}