#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int N; 
  int alice = 0;
  int bob = 0;;
  cin >> N;
  vector<int> cards;

  for (int i = 0; i < N; i++) {
    int newN;
    cin >> newN;
    cards.push_back(newN);
  }

  sort(cards.begin(), cards.end(), greater<int>());
  bool alicePicked = false;
  for (int &card : cards) {
    if (!alicePicked) {
      alice += card;
      alicePicked = true;
    }
    else {
      bob += card;
      alicePicked = false;
    } 
  }

  cout << (alice - bob);
  return 0;
}
