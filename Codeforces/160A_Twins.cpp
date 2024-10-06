#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n,x;
  cin>>n;
  if (n == 1) {
    cout << "1";
    return 0;
  }
  vector<int> iv;
  int total = 0;
  while(cin>>x){
    iv.push_back(x);
    total += x;
  }
  sort(iv.begin(), iv.end(), std::greater<int>());
  int localSum = 0;
  int count = 0;
  for (int &z : iv) {
    localSum += z;
    count++;
    if (localSum > total / 2) {
        cout << count;
        return 0;
    }
  }
  return 0;
}
