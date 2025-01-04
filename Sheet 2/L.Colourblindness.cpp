#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;

    cin >> t;

    while(t--) {
        int n;
        string first, second;
        cin >> n >> first >> second;

        bool isSame = 1;

        for(int i=0; i<n; i++) {
            if(first[i] != second[i] && 
            (first[i] == 'R' || second[i] == 'R')) {
                isSame = 0;
                break;
            }
        }

        if(isSame) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
