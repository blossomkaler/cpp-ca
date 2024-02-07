#include <iostream>
#include <string>
using namespace std;
string reverseWord(const string& word) {
    string reversedWord = "";
    for (int i = word.length() - 1; i >= 0; --i) {
        reversedWord += word[i];
    }
    return reversedWord;
}

string reverseStringWords(const string& str) {
    string word;
    string reversedString = "";
    int start = 0;
    int end = str.find(' ');

    while (end != string::npos) {
        word = str.substr(start, end - start);
        if (!reversedString.empty()) {
            reversedString += " ";
        }
        reversedString += reverseWord(word);
        start = end + 1;
        end = str.find(' ', start);
    }

    // Process the last word
    word = str.substr(start);
    if (!reversedString.empty()) {
        reversedString += " ";
    }
    reversedString += reverseWord(word);

    return reversedString;
}

int main() {
    string inputString ="My name is shinchan";
    string reversedString = reverseStringWords(inputString);
    cout << "String with reversed words: \n" << reversedString << endl;

    return 0;
}

