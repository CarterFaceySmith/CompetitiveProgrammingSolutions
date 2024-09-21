#include <bits/stdc++.h>
#include <cstring>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int num;
  cin >> num;
  cin.ignore();
  int x = 0;
  for(int i = 0; i < num; i++) {
    string line;
    getline(cin, line);
    if (line.find("++") != string::npos) ++x;
    else --x;
  }
  cout << x;
}
