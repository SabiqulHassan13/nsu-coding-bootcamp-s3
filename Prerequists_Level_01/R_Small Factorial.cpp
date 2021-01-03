#include <iostream>
using namespace std;

int factorialValue(int num){
    int result;
    if(num == 0){
        result = 1;
    }
    else{
        result = num * factorialValue(num - 1);
    }
    return result;
}
int main()
{
    int T, tC;
    cin >> T;
    for(tC = 1; tC <= T; tC++){
        int value;
        cin >> value;
        cout << factorialValue(value) << endl;
    }
    return 0;
}
