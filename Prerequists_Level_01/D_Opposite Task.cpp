#include <iostream>
using namespace std;

int main()
{
    int T, tC;
    cin >> T;
    for(tC = 1; tC <= T; tC++){
        int value;
        cin >> value;
        int part1, part2;
        part1 = (value / 2);
        part2 = value - part1;
        cout << part1 << " " << part2 << endl;
    }
    return 0;
}

