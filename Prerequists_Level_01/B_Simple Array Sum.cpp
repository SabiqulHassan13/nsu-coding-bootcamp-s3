#include <iostream>
using namespace std;

int simpleArraySum(int ar[], int len){
    int sum = 0;
    for(int i = 0; i < len; i++){
        sum += ar[i];
    }
    return sum;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int result = simpleArraySum(arr, n);
    cout << result << endl;
    return 0;
}

