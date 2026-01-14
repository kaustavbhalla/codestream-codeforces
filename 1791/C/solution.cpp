#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    string s;
    cin >> s;

    int frontIndex = 0;
    int backIndex = n - 1;

    while ((frontIndex < backIndex) && (s[frontIndex] != s[backIndex])) {
      frontIndex++;
      backIndex--;
    }

    int ans = backIndex - frontIndex + 1;
    if (ans < 0)
      ans = 0;

    cout << ans << "\n";
  }
}
