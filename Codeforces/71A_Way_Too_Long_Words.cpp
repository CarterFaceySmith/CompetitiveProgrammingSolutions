/* Problem statement
* Given an integer number of lines n, and subsequent lowercase word strings * n (length between 1 - 100)
* With strings separated by newlines
* For each word of length > 4, shorten the word to its first and last letter with the number of middle letters between them, i.e. l10n from localization.
* Print each fixed word line by line.
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  int wordCount;
  cin >> wordCount;
  vector<string> retVec;
  string word;
  for(int i = 1; i <= wordCount; i++) {
    cin >> word;
    if (word.length() < 11) {
      cout << word << endl;
      continue;
    }
    string newWord = word.substr(0,1) + to_string(word.length() - 2) + word.substr(word.length() - 1, 1);
    cout << newWord << endl;
  }
}
