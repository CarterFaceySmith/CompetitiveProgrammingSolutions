/* Problem statement
* Given A 500yen coins, B 100yen coins and C 50yen coins, how many way can we make X yen total with any of these coins.
* Inputs are via stdin, A, B, C, X
* Constraints: ABC always pos, always sum to >=1, 50<=X<=20,000, X is always a multiple of 50.
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int A, B, C, X;
  cin >> A >> B >> C >> X;
  int count = 0;

  for (int a = 0; a <= A; a++){
    for (int b = 0; b <= B; b++){
      for (int c = 0; c <= C; c++){
        if (((a * 500) + (b * 100) + (c * 50)) == X) count++;
        else if (((a * 500) + (b * 100) + (c * 50)) > X) break;
      }
    }
  }

  cout << count;
  return 0;
}
