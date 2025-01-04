#include <iostream>
using namespace std;

int main() {
    int l, r, n;
    cin >> l >> r >> n;

    int totalNumbers = r - l + 1;

    int divisible = (r / n) - ((l - 1) / n);

    int answer = totalNumbers - divisible;

    cout << answer << endl;
    return 0;
}
