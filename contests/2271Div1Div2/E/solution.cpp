#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, k;
  cin >> n >> k;

  vector<int> a(n);

  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  int counter = 0;

  while (a.size() != 0) {
    auto it = upper_bound(a.begin(), a.end(), k);

    if (it != a.begin()) {
      auto rem = it - 1;
      a.erase(rem);
      k++;
      counter++;
    } else {
      int val = *it;
      a.erase(it);
      a.emplace_back(val / 2);
      a.emplace_back(val / 2);
      k++;
      counter++;
    }
  }

  cout << counter << "\n";
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
