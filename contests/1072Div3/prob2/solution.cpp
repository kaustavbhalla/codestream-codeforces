#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;

  while (t--) {
    long long s, k, m;
    cin >> s >> k >> m;

    long long flips = m / k;
    long long time = m % k;

    long long ans;

    if (flips % 2 == 0) {
      ans = max(0LL, s - time);
    } else {
      ans = max(0LL, min(s, k) - time);
    }

    cout << ans << "\n";
  }
}
