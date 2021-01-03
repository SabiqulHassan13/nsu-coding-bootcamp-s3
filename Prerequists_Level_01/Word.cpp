#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    string word, tempWord;
    getline(cin, word);
    int countLower = 0, countUpper = 0;
    for(int i = 0; i < word.size(); i++){
        if((word[i] >= 'a') || (word[i] <= 'z'))
            countLower++;
        else if((word[i] >= 'A') || (word[i] <= 'Z'))
            countUpper++;
    }
    if(countLower == countUpper){
        for(int i = 0; i < word.size(); i++){
            tempWord = tolower(word[i]);
        }
    }
//        cout << word.toLower() << endl;
    else
        cout << tempWord << endl;
    return 0;
}
