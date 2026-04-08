#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;

  vector<int> a(n);

  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  vector<int> retArr;
  if (n <= 2) {
    cout << "NO";
    return;
  } else {
    for (int i = 2; i < n; i++) {
      int sumi = 0;
      for (int j = 0; j < i; j++) {
        sumi += a[j];
      }
      if (sumi == a[i]) {
        swap(a[i - 1], a[i]);
      }
    }
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
}
