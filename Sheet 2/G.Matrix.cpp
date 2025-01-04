#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n][n];
    int mainDiagonal = 0, secondaryDiagonal = 0;

    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cin >> arr[i][j];
        }
        mainDiagonal += arr[i][i];
        
    }

    for(int i=0; i<n; i++) {
        secondaryDiagonal += arr[i][n - i - 1];
    }
    
    int result = mainDiagonal - secondaryDiagonal;
    cout << abs(result) << endl;  
    return 0;
}
