#include <iostream>
using namespace std;

int main()
{
    int T, a, b, c;
    cin >> T;
    for(int tC = 1; tC <= T; tC++){
        cin >> a >> b >> c;
        if((a + b) > c){
            if(a == b || a == c || b == c){
                cout << "Case " << tC << ": Isosceles\n";
            }
            else if(a == b && a == c){
                cout << "Case " << tC << ": Equilateral\n";
            }
            else{
                cout << "Case " << tC << ": Scalene\n";
            }
        }
        else{
            cout << "Case " << tC << ": Invalid\n";
        }
    }
    return 0;
}
