#include <iostream>
using namespace std;

int main()
{
    int T, tC, num1, num2;
    cin >> T;
    for(tC = 1; tC <= T; tC++){
        cin >> num1 >> num2;
        cout << "Case " << tC << ": " << (num1 + num2) << endl;
    }
    return 0;
}
