#include <iostream>
using namespace std;

int main()
{
    int t, tC, a, b;
    cin >> t;
    for(tC = 0; tC < t; tC++){
        cin >> a >> b;
        if(a < b){
            cout << "<" << endl;
        }
        else if(a > b){
            cout << ">" << endl;
        }
        else if(a == b){
            cout << "=" << endl;
        }
    }
    return 0;
}
