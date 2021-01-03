#include <iostream>
using namespace std;

int reverseOfNum(int num){
    int tempNum = num;
    int newNum = 0, rem;
    do{
        rem = tempNum % 10;
        newNum = (newNum * 10) + rem;
        tempNum /= 10;
    }while(tempNum != 0);
    return newNum;
}
int main()
{
    int T, tC;
    cin >> T;
    for(tC = 1; tC <= T; tC++){
        int value;
        cin >> value;
        cout << reverseOfNum(value) << endl;
    }
    return 0;
}


