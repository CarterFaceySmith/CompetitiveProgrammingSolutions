#include <bits/stdc++.h>
using namespace std;

int dSum(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int N, A, B;
    cin >> N >> A >> B;
    
    int totalSum = 0;
    
    for (int i = 1; i <= N; i++) {
        int sum = dSum(i);
        if (sum >= A && sum <= B) {
            totalSum += i;
        }
    }
    
    cout << totalSum;
    return 0;
}
