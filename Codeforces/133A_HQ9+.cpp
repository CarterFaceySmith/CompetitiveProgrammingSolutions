#include <bits/stdc++.h>
using namespace std;
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  string i;
  cin >> i;
  set<char> lang{'H', 'Q', '9'};
  for(char &c: i){
    if(lang.find(c) != lang.end()) {
      cout<<"YES";
      return 0;
    }
  }
  cout<<"NO";
  return 0;
}
