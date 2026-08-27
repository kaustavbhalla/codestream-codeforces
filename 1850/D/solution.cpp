#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, k;
  cin >> n >> k;

  vector<int> a(n);

  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  sort(a.begin(), a.end());

  int counter = 0;

  int temp = 0;

  for (int i = 1; i < n; i++) {
    if (a[i] - a[i - 1] <= k)
      temp++;
    else {
      if (temp > counter)
        counter = temp;
      temp = 0;
    }
  }
  if (temp > counter)
    counter = temp;
  cout << n - counter - 1 << "\n";
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
