#include <iostream>
using namespace std;

bool fArray[26];

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, balloons = 0;
        string problems;
        cin >> n >> problems;

        bool fArray[26] = {0};

        for (int i = 0; i < n; i++) {
            int problemIndex = problems[i] - 'A';
            if (fArray[problemIndex]) {
                balloons++;
            } else {
                balloons += 2;
                fArray[problemIndex] = 1;   
            }
        }

        cout << balloons << endl;
    }
    return 0;
}
