#include <iostream>
#include <cctype> 
#include <string>

using namespace std;

int main() {
    string str;
    cin >> str;

    bool allUpper = true;

    bool firstlowerRestCapital = islower(str[0]);

    for(int i=1; i<str.length(); i++) {
        if(islower(str[i])) {
            allUpper = false;
            firstlowerRestCapital = false;
            break;
        }
    }

    if(allUpper || allUpper && firstlowerRestCapital) {
        for(int i=0; i<str.length(); i++) {
            if(isupper(str[i])) 
                str[i] = tolower(str[i]);
            else {
                str[i] = toupper(str[i]);
            }

        }
    }

    cout << str << endl;
    return 0;
}
