#include <iostream>
using namespace std;

int main() {
    int n, location = 1;
    cin >> n;

    int arr[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    int lowest = arr[0];

    for(int i=1; i<n; i++) {
        if(lowest > arr[i]) {
            lowest  = arr[i];
            location = i+1;
        }
    }

    cout << lowest << " " << location << endl;
    return 0;
}
