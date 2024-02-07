#include <iostream>
#include <string>
using namespace std;
int main() {
    string inputString="C++ is coding language";
    string word;
    string reversedWords;
    for (int i = inputString.length() - 1; i >= 0; i--) {
        if (inputString[i] != ' ') {
            word = inputString[i] + word;
        } else {
            reversedWords += (word + " ");
            word.clear();
        }
    }
    reversedWords += word;
    cout << "Words in reversed order: " << reversedWords << endl;
    return 0;
}

