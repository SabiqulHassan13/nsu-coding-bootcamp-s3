#include <iostream>
using namespace std;

void countMaxOccurance(int a[], len){
    int maxCount = 0;
    for(int i = 0; i < (len - 1); i++){
        int count = 0;
        for(int j = i+1; j < len; j++){
            if(a[i] == a[j]){
                count++;
            }
        }
        maxCount = (maxCount < count)? count : maxCount;
    }

}
int main()
{
    int T, tC;
    cin >> T;
    for(tc = 1; tC <= T; tC++){
        int arrLen;
        cin >> arrLen;
        int arr[arrLen];
        for(i = 0; i < arrLen; i++){
            cin >> arr[i];
        }
        countMaxOccurance(arr, arrLen);
    }

    return 0;
}

