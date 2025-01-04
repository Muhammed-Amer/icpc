#include <iostream>
#include <algorithm>
using namespace std;
#define endl "\n"

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    int arr[n];

    for(int i=0; i<n ;i++) {
        cin >> arr[i];
    }

    // // bubble sort
    // for(int i=0; i<n-1; i++) {
    //     for(int j=0; j<n-i-1; j++) {
    //         if(arr[j] > arr[j+1]) {
    //             // swap
    //             int temp = arr[j];
    //             arr[j] = arr[j+1];
    //             arr[j+1] = temp;
    //         }
    //     }
    // }

    sort(arr, arr + n);

    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    for(int i=n-1; i>=0; i--) {
        cout << arr[i] << " ";
    }

    return 0;
}