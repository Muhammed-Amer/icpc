    #include <iostream>
    using namespace std;
    #define endl "\n"

    int main()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);

        int l1, r1, l2, r2;
        cin >> l1 >> r1 >> l2 >> r2;

        if(l2 > r1 || l1 > r2) {
            cout << -1 << endl;
        }
        else {
            if(l1 > l2) {
                cout << l1 << " ";
            } else {
                cout << l2 << " ";
            }
            if(r1 < r2) {
                cout << r1 << " ";
            } else {
                cout << r2 << " ";
            } 
        }
        
        return 0;
    }