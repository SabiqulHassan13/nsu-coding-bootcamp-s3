#include <iostream>
using namespace std;

int main()
{
    int T, tC, A, B;
    cin >> T;
    for(tC = 1; tC <= T; tC++){
        cin >> A >> B;
        int remainder = A % B;
        cout << remainder << endl;
    }
    return 0;
}

