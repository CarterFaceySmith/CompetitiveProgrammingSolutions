#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool canBuild(const string& s) {
    int n = s.length();
    vector<bool> dp(n + 1, false);
    dp[0] = true;  // Empty string is always valid

    vector<string> words = {"dream", "dreamer", "erase", "eraser"};

    for (int i = 0; i <= n; i++) {
        if (!dp[i]) continue;  // If we can't build up to this point, skip

        for (const string& word : words) {
            if (i + word.length() <= n && s.substr(i, word.length()) == word) {
                dp[i + word.length()] = true;
            }
        }
    }

    return dp[n];
}

int main() {
    string s;
    cin >> s;
    cout << (canBuild(s) ? "YES" : "NO") << endl;
    return 0;
}
