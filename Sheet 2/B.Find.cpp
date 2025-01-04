#include <iostream>
using namespace std;
#define endl "\n"

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, num;
    float isFound = 0;
    cin >> n >> num;

    int arr[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    for(int i=0 ; i<n; i++) {
        if(arr[i] == num) {
            cout << i << endl;
            isFound = 1;
            break;
        }
    }

    if(!isFound) {
        cout << "Not Found\n";
    }
    return 0;
}