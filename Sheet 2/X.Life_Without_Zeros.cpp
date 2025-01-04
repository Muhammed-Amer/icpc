#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;

void solve() {
    int a, b;
    cin >> a >> b;

    ll res = a + b;

    string sa = to_string(a);
    string sb = to_string(b);
    string sres = to_string(res);

    string saa, sbb, ssres;

    for(int i=0; i<sa.length(); i++) {
        if(sa[i] != '0') saa+= sa[i];
        if(sb[i] != '0') sbb+= sb[i];
    }

    for(int i=0; i<sres.length(); i++) {
        if(sres[i] != '0') ssres+= sres[i];
    }

    a = stoi(saa);
    b = stoi(sbb);
    res = stoi(ssres);

    if(a + b == res) cout << "YES\n";
    else cout << "NO\n";
}

int main() {
    solve();
    return 0;
}
