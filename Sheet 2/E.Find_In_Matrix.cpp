#include <iostream>
using namespace std;

int main() {
    int n, m, x;
    bool isFound = 0;
    cin >> n >> m;

    int arr[n][m];

    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cin >> arr[i][j];
        }
    }

    cin >> x;

    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            if(arr[i][j] == x) {
                isFound = 1;
                break;
            }
        }
    }

    if(isFound) cout << "YES\n";
    else cout << "NO\n";

    return 0;
}
