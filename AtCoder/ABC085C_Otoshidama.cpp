#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  // Given input of N yen bills totalling Y, print a possible set of 10000, 5000, 1000 bills if total is possible (i.e 1 3 1), else print -1
  // Y is always a multiple of 1000
  int N, Y;
  cin>>N>>Y;
 
  for (int i = 0; i <= N; i++) {
    for (int j = 0; j <= N - i; j++) {
      int k = N - i - j;

      if (i * 10000 + j * 5000 + k * 1000 == Y) {
        cout << i << " " << j << " " << k << endl;
        return 0;
      }
    }
  }

  cout<<"-1 -1 -1";
  return 0;
}
