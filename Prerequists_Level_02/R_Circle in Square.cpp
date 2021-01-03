#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    int T, tC;
    cin >> T;
    double PI = 2 * acos(0.0);
    double radius;
    double area;
    for(tC = 1; tC <= T; tC++){
        cin >> radius;
        area = (4 - PI) * radius * radius;
        cout << "Case " << tC << ": " << fixed << setprecision(2) << area << endl;
    }
    return 0;
}
