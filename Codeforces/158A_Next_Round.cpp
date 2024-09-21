#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int nums, place, currNum, threshold;
  cin >> nums;
  vector<int> numVec;
  cin >> place;
  int count = 0;
  for(int i = 0; i < nums; i++) {
    cin >> currNum;
    numVec.push_back(currNum);
    if (i == place - 1) threshold = currNum;
  }

  for(int &num : numVec) {
    if ((num == 0) && (threshold == 0)) continue;
    if (num >= threshold) count++;
    else break;
  }

  cout << count;
  return 0;
}
