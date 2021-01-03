#include <iostream>
using namespace std;

int sumOfDigits(int num){
    int tempNum = num;
    int sum = 0, rem;
    do{
        rem = tempNum % 10;
        sum += rem;
        tempNum /= 10;
    }while(tempNum != 0);
    return sum;
}
int main()
{
    int T, tC;
    cin >> T;
    for(tC = 1; tC <= T; tC++){
        int value;
        cin >> value;
        cout << sumOfDigits(value) << endl;
    }
    return 0;
}

