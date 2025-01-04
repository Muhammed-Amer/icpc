#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;

void solve() {
        int n, m;
        cin >> n >> m;
        string arr[n];
        for(int i=0; i<n; i++) cin >> arr[i];

        int minimumCounter = 10000;

        for(int i=0; i<n-1; i++) {
            for(int j=i+1; j<n; j++) {
                int counter = 0;
                for(int k=0; k<m; k++) {
                    int diff = abs(arr[i][k] - arr[j][k]);
                    counter += diff;
                }
                if(counter < minimumCounter) {
                    minimumCounter = counter;
                }
            }
        }

        cout << minimumCounter << endl;
}

int main() {
    int t;
    cin >> t;

    while(t--) {
        solve();
    }
    return 0;
}
