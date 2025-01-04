#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;

void solve() {
    string str;
    int t;

    cin >> str;
    cin >> t;

    while(t--) {
        bool isPalindrome = true;

        int l, r;
        cin >> l >> r;

        l--;
        r--;

        for(int i=l; i<=r; i++) {
            if(str[i] != str[r - (i - l)]) {
                isPalindrome = false;
                break;
            }
        }

        if(isPalindrome) cout << "YES\n";
        else cout << "NO\n";
    }
}

void fastIO(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main() {
    fastIO();
    solve();
    return 0;
}