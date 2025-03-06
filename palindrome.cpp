#include <iostream>
#include <algorithm>

using namespace std;

bool isPalindrome(string s) {
    string original = s;
    reverse(s.begin(), s.end()); // Reverse the string
    return original == s; // Compare original and reversed strings
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    if (isPalindrome(str))
        cout << "The string is a palindrome." << endl;
    else
        cout << "The string is not a palindrome." << endl;

    return 0;
}