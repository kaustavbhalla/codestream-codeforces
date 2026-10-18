#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, x;
  cin >> n >> x;

  vector<int> a(n);
  vector<int> b(n);
  vector<int> c(n);

  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int i = 0; i < n; i++) {
    cin >> b[i];
  }

  for (int i = 0; i < n; i++) {
    cin >> c[i];
  }

  int topA = 0;
  int topB = 0;
  int topC = 0;

  int currKnow = 0;

  while ((!(a[topA] & ~x) || !(b[topB] & ~x) || !(c[topC] & ~x)) &&
         (currKnow <= x) && (topA < n) && (topB < n) && (topC < n)) {
    int A = a[topA] & ~x;
    int B = a[topB] & ~x;
    int C = a[topC] & ~x;

    if (A == 0) {
      currKnow |= a[topA];
      topA++;
    }
    if (B == 0) {
      currKnow |= b[topB];
      topB++;
    }
    if (C == 0) {
      currKnow |= c[topC];
      topC++;
    }
  }

  if (currKnow == x) {
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
