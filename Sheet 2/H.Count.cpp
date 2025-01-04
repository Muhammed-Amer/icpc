#include <iostream>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    int arr[n];

    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    while(q--) {
        int l, r, x;
        cin >> l >> r >> x;

        int count = 0;

        for(int i=l-1; i<r; i++) {
            if(arr[i] == x) count++;
        }

        cout << count << endl;
    }
    return 0;
}
