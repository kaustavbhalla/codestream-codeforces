#include <bits/stdc++.h>
#include <numeric>
using namespace std;

void solve() {
  long long n;
  cin >> n;

  int flag = 0;
  vector<long long> a(n);

  for (long long i = 0; i < n; i++) {
    cin >> a[i];
  }

  for (long long i = 0; i < n; i++) {
    for (long long j = i + 1; j < n; j++) {
      if (gcd(a[i], a[j]) <= 2) {
        flag = 1;
      }
    }
  }

  if (flag == 0) {
    cout << "NO\n";
  } else {
    cout << "YES\n";
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
