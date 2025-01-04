#include<iostream>
#include<algorithm>
using namespace std;
#define endl "\n"

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b, c;
    cin >> a >> b >> c;

    int arr[] = {a, b, c};

    sort(arr, arr + 3);

    for (int i = 0; i < 3; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}