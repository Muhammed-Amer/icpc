#include <iostream>
#include<string>
using namespace std;
#define endl "\n"

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string str = "codeforces";
    int counter;
    char ch;

    cin >> counter;
    
    for (int i = 0; i < counter; i++) {
        cin >> ch;
        bool found = 0;
        for (char c : str) {
            if (c == ch) {
                found = 1;
                break;
            }
        }
        if(found) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }   
    }
    return 0;
}