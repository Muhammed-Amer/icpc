#include <iostream>
using namespace std;
#define endl "\n"

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int counter, rating;
    cin >> counter;

    for(int i=0; i<counter; i++) {
        cin >> rating;
        if(rating >= 1900) cout << "Division 1\n";
        else if(rating <= 1899 && rating >= 1600) cout << "Division 2\n";
        else if(rating <=1599 && rating >= 1400) cout << "Division 3\n";
        else if(rating <= 1399) cout << "Division 4\n";
    }
    return 0;
}