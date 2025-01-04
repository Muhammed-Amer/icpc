#include <iostream>
#include <string>
using namespace std;

int main() {
    string N;
    cin >> N;

    int sum = 0;
    for (char ch : N) {
        sum += (ch - '0');
    }

    if (sum % 3 == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}