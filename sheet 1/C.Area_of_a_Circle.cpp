#include <iostream>
#include<iomanip>
using namespace std;

#define end "\n"
#define BI 3.14159
int main()
{
    cout << fixed << setprecision(4);
    double r;
    cin >> r;
    
    double area = BI * r * r;
    cout << "A="<< area;
    
    return 0;
}