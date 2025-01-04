#include <iostream>
#include <cctype> 
#include <string>
using namespace std;

int fArray[26] = {0};

int main() {
    int n;
    string str;
    cin >> n >> str;

    bool isPangram = true;

    for(int i=0; i<n; i++) {
        str[i] = tolower(str[i]);
        fArray[str[i] - 'a'] = 1;
    }

    for(int i=0; i<26; i++) {
        if(fArray[i] == 0) {
            isPangram = false;
            break;
        }
    }

    if(isPangram) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}
