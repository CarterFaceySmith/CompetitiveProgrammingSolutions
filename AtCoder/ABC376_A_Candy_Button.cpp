#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,c,x;
    int total,lastPushed = 0;
    vector<int> tv;
    cin>>n>>c;
    for(int z=0;z<n;z++) tv.insert(tv.end(), x);
    for(int y:tv){
        if(lastPushed==0) total++;
        if(y-lastPushed>=n) total++;
        if(lastPushed!=0) lastPushed=y;
    }
    cout<<total;
}
