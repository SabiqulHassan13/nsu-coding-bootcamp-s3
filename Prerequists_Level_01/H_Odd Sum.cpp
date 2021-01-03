#include <iostream>
using namespace std;

int main()
{
    int T, tC;
    cin >> T;
    for(tC = 1; tC <= T; tC++){
        int oddSum = 0;
        int first, last;
        cin >> first >> last;
        for(int i = first; i <= last; i++){
            if(i % 2 == 1){
                oddSum += i;
            }
        }
        cout << "Case " << tC << ": " << oddSum << endl;
    }
    return 0;
}

