#include <iostream>
using namespace std;

int main()
{
    int T, tC, N;
    cin >> T;
    cin >> N;
    for(tC = 1; tC <= T; tC++){
        int arr[N];
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        int minNum = arr[0];
        for(int i = 1; i < N; i++){
            if(arr[i] < minNum){
                minNum = arr[i];
            }
        }
        int minNum2 = arr[0];
        for(int i = 0; i < N; i++){
            if((arr[i] > minNum) && (arr[i] < minNum2)){
                minNum2 = arr[i];
            }
        }
        cout << (minNum + minNum2) << endl;
    }
    return 0;
}

