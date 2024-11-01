#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, c, x;
    int total = 0;
    int lastPushed = 0;
    cin>>n>>c;
    for(int z=0;z<n;z++) {
        cin>>x;
        if(lastPushed==0) total++;
        if(x-lastPushed>=n && lastPushed != 0) total++;
        if(lastPushed!=0) lastPushed=x;
    }
    cout<<total;
}
