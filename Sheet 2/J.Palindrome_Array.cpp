#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];

    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    bool palindrome = 1;
    for(int i=0; i<n/2; i++) {
        if(arr[i] != arr[n-i-1]) {
            palindrome = 0;
            break;
        }
    }

    if(palindrome) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}
