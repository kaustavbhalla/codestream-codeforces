#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, k;
  cin >> n >> k;

  string s;
  cin >> s;

  vector<int> freq(26);

  for (char c : s) {
    freq[c - 'a']++;
  }

  int odd = 0;

  for (int x : freq) {
    if (x % 2 != 0) {
      odd++;
    }
  }

  int oddInPal = (n - k) % 2;

  if (odd <= k + oddInPal) {
    cout << "YES\n";
  } else {
    cout << "NO\n";
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
