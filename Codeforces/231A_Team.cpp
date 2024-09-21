#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  int count = 0;
  int num, a, b, c;
  cin >> num;
  for(int i = 0; i < num; i++) {
    cin >> a >> b >> c;
    if ((a + b + c) >= 2) count++;
  }
  cout << count;
}
