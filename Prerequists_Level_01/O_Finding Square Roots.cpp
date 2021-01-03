#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int T, tC;
    cin >> T;
    for(tC = 1; tC <= T; tC++){
        int value;
        cin >> value;
        double sqrtVal = sqrt(value);
        int result = (int) sqrtVal;
        cout << result << endl;
    }
    return 0;
}

