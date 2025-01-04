#include <iostream>
#include <cctype> 
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        string str;
        cin >> str;

        int n = str.length();
        if(n <= 10) 
            cout << str << endl;
        else {
            string res = str[0] + to_string(n - 2) + str[n-1];
            cout  << res << endl;
        }
    }
    return 0;
}
