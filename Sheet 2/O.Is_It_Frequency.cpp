#include<iostream>
using namespace std;
int fArr[100000+5];

int main() {
    int n, m;
    cin >> n >> m;

    int arr[n];
    for(int i=0; i<m; i++) {
        fArr[i] = 0;
    }

    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    for(int i=0; i<n; i++) {
        fArr[arr[i]] ++;
    }

    for(int i=1; i<=m; i++) {
        cout << fArr[i] << endl;
    }
}