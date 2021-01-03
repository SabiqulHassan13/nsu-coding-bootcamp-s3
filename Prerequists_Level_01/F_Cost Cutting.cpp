#include <iostream>
using namespace std;

int surviveSalaray(int s1, int s2, int s3){
    int salary = 0;
    if(s1 > s2){
        if(s2 > s3){
            salary = s2;
        }
        else{
            salary = (s1 > s3)? s3 : s1;
        }
    }
    else{
        if(s1 > s3){
            salary = s1;
        }
        else{
            salary = (s2 > s3)? s3 : s2;
        }
    }
    return salary;
}
int main()
{
    int T, tC;
    int salaray1, salaray2, salaray3;
    cin >> T;
    for(tC = 1; tC <= T; tC++){
        cin >> salaray1 >> salaray2 >> salaray3;
        int result = surviveSalaray(salaray1, salaray2, salaray3);
        cout << "Case " << tC << ": " << result << endl;
    }
    return 0;
}
