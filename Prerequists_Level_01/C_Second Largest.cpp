#include <iostream>
using namespace std;

int find2Largest(int s1, int s2, int s3){
    int large2 = 0;
    if(s1 > s2){
        if(s2 > s3){
            large2 = s2;
        }
        else{
            large2 = (s1 > s3)? s3 : s1;
        }
    }
    else{
        if(s1 > s3){
            large2 = s1;
        }
        else{
            large2 = (s2 > s3)? s3 : s2;
        }
    }
    return large2;
}
int main()
{
    int T, tC;
    int a, b, c;
    cin >> T;
    for(tC = 1; tC <= T; tC++){
        cin >> a >> b >> c;
        int result = find2Largest(a, b, c);
        cout << result << endl;
    }
    return 0;
}
