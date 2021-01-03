#include <iostream>
using namespace std;

int main()
{
    int tC, a, b, c;
    tC = 0;
    while(1){
        cin >> a >> b >> c;
        if(!(a == 0 && b == 0 && c == 0)){
            return 1;
        }
        int side1 = a*a + b*b;
        int side2 = c*c;
        if(side2 == side1){
            cout << "right\n";
        }
        else{
            cout << "wrong\n";
        }
        tC++;
    }
    return 0;
}

