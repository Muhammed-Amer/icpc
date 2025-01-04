#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;

void solve() {
    string str;
    cin >> str;

    int mismatches = 0;

    for(int i=0; i<str.length()/2; i++) {
        if(str[i] != str[str.length()-1-i]) {
            mismatches++;
        }
    }

    if(mismatches == 1 || (mismatches == 0 && str.length() % 2 == 1)) {
            cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    solve();
    return 0;
}