#include <bits/stdc++.h>
#include <cstdio>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  string s;
  getline(cin, s);
  int playerCount = 1;
  for(int i = 0; i < s.length() - 1; i++) {
    if (s[i] == s[i+1]) {
      playerCount++;
    }
    if (playerCount == 7) {
      cout << "YES";
      return 0;
    }
    else if (s[i] != s[i+1]) {
      playerCount = 1;
    }
  }

  cout << "NO";
  return 0;
}
